

int button=12;
int buttonL=13;
int aug1=2;//a
int vid1=4;//g
int apak1=6;//d
int kraug1=8;//f
int krap1=5;//e
int laug1=3;//b
int lapa1=7;//c
int punk1=9;//dp

int buttonNew;
int buttonState;
int buttonOld;
int Mode=10;
boolean modeChanged = false;
const int NUM_MODES = 10;


void setup() {
  
 Serial.begin(9600);
  pinMode(button,INPUT);
  pinMode(buttonL,INPUT);
  pinMode(aug1,OUTPUT);
  pinMode(vid1,OUTPUT);
  pinMode(apak1,OUTPUT);
  pinMode(kraug1,OUTPUT);
  pinMode(krap1,OUTPUT);
  pinMode(laug1,OUTPUT);
  pinMode(lapa1,OUTPUT);
  pinMode(punk1,OUTPUT);
  digitalWrite(punk1,HIGH);
}
void loop(){
 
 buttonOld = digitalRead(button);
 delay(100);
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

if(Mode==0){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==1) {
  digitalWrite(aug1,LOW);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
   
  }
if(Mode==2) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,LOW);
   
  }
if(Mode==3) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
    
  }
if(Mode==4) {
  digitalWrite(aug1,LOW);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==5) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,LOW);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==6){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,LOW);
  digitalWrite(lapa1,HIGH);
   
  }
if(Mode==7){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==8){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
  if(Mode==9){
    digitalWrite(aug1,HIGH);
    digitalWrite(vid1,HIGH);
    digitalWrite(apak1,HIGH);
    digitalWrite(kraug1,HIGH);
    digitalWrite(krap1,LOW);
    digitalWrite(laug1,HIGH);
    digitalWrite(lapa1,HIGH);
  } 
}
 else {
  buttonOld = digitalRead(buttonL);
  delay(100);
  buttonNew = digitalRead(buttonL);
  if(buttonOld==buttonNew){ 
    if(buttonOld !=buttonState){
      if(buttonOld==LOW){
        Mode--;
        if(Mode>=NUM_MODES){
          Mode=9;
          }
      modeChanged=true;
      }
    }
  buttonState=buttonOld;
  }
  }
if(modeChanged){
  modeChanged=false;

if(Mode==0){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==1) {
  digitalWrite(aug1,LOW);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
   
  }
if(Mode==2) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,LOW);
   
  }
if(Mode==3) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
    
  }
if(Mode==4) {
  digitalWrite(aug1,LOW);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==5) {
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,LOW);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==6){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,LOW);
  digitalWrite(lapa1,HIGH);
   
  }
if(Mode==7){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,LOW);
  digitalWrite(apak1,LOW);
  digitalWrite(kraug1,LOW);
  digitalWrite(krap1,LOW);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
if(Mode==8){
  digitalWrite(aug1,HIGH);
  digitalWrite(vid1,HIGH);
  digitalWrite(apak1,HIGH);
  digitalWrite(kraug1,HIGH);
  digitalWrite(krap1,HIGH);
  digitalWrite(laug1,HIGH);
  digitalWrite(lapa1,HIGH);
  
  }
  if(Mode==9){
    digitalWrite(aug1,HIGH);
    digitalWrite(vid1,HIGH);
    digitalWrite(apak1,HIGH);
    digitalWrite(kraug1,HIGH);
    digitalWrite(krap1,LOW);
    digitalWrite(laug1,HIGH);
    digitalWrite(lapa1,HIGH);
  } 
  }
  }
