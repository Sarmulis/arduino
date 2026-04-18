//#include <AltSoftSerial.h>
//AltSoftSerial bluetoothSerial;
//boolean NL=true;

#include <SoftwareSerial.h>
SoftwareSerial SerialBT(8,9);
int tx=8;
int rx=9;
//char inSerial;

//L298N
//motor1
const int motor1pin1 = 2;
const int motor1pin2 = 3;
//motor2
const int motor2pin1 = 4;
const int motor2pin2 = 5;
int LEDpin = 13;

int data;
//phone joistick
int command1 = 45; //forward
int command2 = 53; //backward
int command3 = 67; //left
int command4 = 74; //Right
int command5 = 88; //stop
int command6 = 92; //led


//char t;
//char Serialdata;

void setup() {
  Serial.begin(9600);
  SerialBT.begin(9600);
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);
  pinMode(LEDpin,OUTPUT);
  pinMode(tx,OUTPUT);
  pinMode(rx,INPUT);
  delay(500);
}
void loop(){
  
 //if(Serial.available()>0){  
 // while(Serial.available()>0){
  //  inSerial=Serial.read();
 //}
// data=SerialBT.parseInt(); 
//data=SerialBT.read(); //with it something work
    
// if(Serial.available()){
// Serialdata = Serial.read()
// bluetoothSerial.print(Serialdata);
// if(Serialdata!=8&Serialdata!=9)(
// bluetoothSerial.write(Serialdata);

if(Serial.available()>0)
SerialBT.write(Serial.read());
if(SerialBT.available()>0)
Serial.write(SerialBT.read());

 if(data==command1){
  digitalWrite(motor1pin1,HIGH);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,HIGH);
  digitalWrite(motor2pin2,LOW);
  delay(100);
  }
 if(data==command2){
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,HIGH);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,HIGH);
  delay(100);
  }
 if(data==command3){
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,HIGH);
  digitalWrite(motor2pin1,HIGH);
  digitalWrite(motor2pin2,LOW);
  delay(100);
  }
 if(data==command4){
  digitalWrite(motor1pin1,HIGH);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,HIGH);
  delay(100);
  }
 if(data==command5){
  digitalWrite(motor1pin1,LOW);
  digitalWrite(motor1pin2,LOW);
  digitalWrite(motor2pin1,LOW);
  digitalWrite(motor2pin2,LOW);
  delay(100);
  }
 if(data==command6){ 
  digitalWrite(LEDpin,HIGH);
  delay(100);
 }
 }
