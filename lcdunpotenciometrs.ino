#include <WireData.h>

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    
  lcd.init();
  lcd.backlight();
}
void loop() {
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Level");
  
  int potent=analogRead(A0);
  potent=map(potent,0,1023,17,0);
  lcd.setCursor(0,1);
  for(int i=0; i<potent; i++){
    lcd.print((char)0b11111111);
    }
  delay(50);
  
}
