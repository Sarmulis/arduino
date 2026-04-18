#include <Key.h>
#include <Keypad.h>
#include <WireData.h>

#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);


byte ROWS = 4;
byte COLS = 4;
byte rowPins[4] = {2,3,4,5};
byte colPins[4] = {6,7,8,9};
char keys[4][4] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, 4, 4);

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {
  char key = keypad.getKey();
  delay(100);
  lcd.setCursor(0,0);
  if(key){
    lcd.print(key);
    lcd.print(" ");
   }

}
