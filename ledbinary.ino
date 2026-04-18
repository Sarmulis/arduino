#define led1 4
#define led2 5
#define led3 6
#define led4 7
int button=2;
int buttonState;
int buttonNew;
int buttonOld;
int Mode=17;// if this is zero, it read Mode==0 only when finished all loop, so now it is 17(loop last work)
boolean modeChanged = false;
const int NUM_MODES = 17;

void setup() {
  Serial.begin(9600);
  Serial.println(F("Poga darbojas"));
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(button,INPUT);
  buttonState=digitalRead(button);
}

void loop() {
  buttonOld = digitalRead(button);
  delay(10);
  buttonNew = digitalRead(button);
  if(buttonOld==buttonNew){ 
    if(buttonOld !=buttonState){
      if(buttonOld==LOW){
        Mode++;
        if(Mode>=NUM_MODES){
          Mode=0;
          }
      modeChanged=true;
      }
    }
  buttonState=buttonOld;
  }
if(modeChanged){
  modeChanged=false;
  //each action on each button push
  if(Mode==0){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  Serial.println(F("BUTTON ON"));
 }
 if(Mode==1){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
 }
 if(Mode==2){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
 }
 if(Mode==3){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
 }
 if(Mode==4){
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
 }
 if(Mode==5) {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
 }
 if(Mode==6) {
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
 }
 if(Mode==7){
  digitalWrite(led1,LOW);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
 }
 if(Mode==8){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
 }
 if(Mode==9){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
 }
 if(Mode==10){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
 }
 if(Mode==11){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
 }
 if(Mode==12){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
 }
 if(Mode==13){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,HIGH);
 }
 if(Mode==14){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,LOW);
 }
 if(Mode==15){
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH); 
 }
 if(Mode==16){
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  Serial.println(F("BUTTON OFF"));
 }
}
}
