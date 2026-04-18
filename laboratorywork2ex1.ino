#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h> //include library of DHT11 sensor

#define DHTPIN 4 //define active pin
#define DHTTYPE DHT11 //define type of DHT sensor
DHT_Unified dht(DHTPIN, DHTTYPE);

#define button 2 // define button pin
#define LED 6 //define led pin
int Mode=3; //if it is zero, it will start loop with Mode==1, but i start with mode==0
int buttonNew; //define button change status
int buttonOld; //define button real status
int buttonState;
boolean modeChanged = false;
const int NUM_MODES = 3;
void setup() {
  
Serial.begin(9600); //activating button
dht.begin(); // sensaor start work
Serial.println(F("DHT11 value")); //print sensor coment

pinMode(button,INPUT); //define how button work
pinMode(LED,OUTPUT); //define how led work
buttonState=digitalRead(button);
}

void loop() {
  
buttonOld = digitalRead(button); // accept button new status is what it read from button pin in moment
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

 if(Mode==0){
    digitalWrite(LED,LOW);
 }
if(Mode==1){
    digitalWrite(LED,HIGH);
}
if(Mode==2){
    digitalWrite(LED,LOW);
    sensors_event_t event;// sensors information print on the screen
    dht.temperature().getEvent(&event);
    Serial.print(F("Temperature: "));
    Serial.print(event.temperature);
    Serial.print(F("°C "));
    dht.humidity().getEvent(&event);
    Serial.print(F("Humidity: "));
    Serial.print(event.relative_humidity);
    Serial.println(F("%"));
    delay(2000);
}
  }
}  
