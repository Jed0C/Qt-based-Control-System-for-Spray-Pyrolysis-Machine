

String chaine ="";
String value[5];
float velocity = 2.5;
bool shift = false;
int S_point = 0;
int E_point = 0;
int process_time = 0;
float periode = 0;
float shift_time = 0;
int pin = 5;


void setup(){
  
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
}

void loop()
{
  
  if(Serial.available()){
    chaine = Serial.readString();
    configuration(chaine,&S_point,&E_point,&process_time,&periode,&shift_time,&shift);

    if(shift)  {
      move_forward(pin,shift_time);
    }

    reciprocate(pin,process_time,periode);
  
    if(shift){
      move_backward(pin,shift_time);
      shift= !shift;}
  }
}

void configuration(String ch,int* a, int* b, int* t, float* per, float* per1,bool* shift){
  
  int pos =0,i=0;
  
  while(pos < ch.length()){
    pos = ch.indexOf("-");
    value[i] = ch.substring(0,pos);
    ch.remove(0,pos+1);
    i++;
  }
  
  *a = value[0].toInt();
  *b = value[1].toInt();
  *t = 3600*value[2].toInt() + 60*value[3].toInt()+value[4].toInt();
  *per1=*a/velocity;
  *per=(*b-*a)/velocity;
  *shift=*a;

}

void move_forward(int pin,float time){

  digitalWrite(pin,HIGH);
  delay(time*1000);
 
}

void move_backward(int pin,float time){

  digitalWrite(pin,LOW);
  delay(time*1000);
 
}

void reciprocate(int pin,float time,float periode)
{

  int n = time / periode;
  if(n %2!=0){n=n+1;}

  int i=0;

  while(i<n)
  {if(i%2==0){
    move_forward(pin,periode);
            }

   else {
    move_backward(pin,periode);
       	}
   i++;
  }
}