//Including Libraries
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//Defs
#define SERIAL_SPEED 9600

//Global Variables
LiquidCrystal_I2C lcd(0x27,20,4);

//HW Setup
void setup() {
  lcd.init();
  lcd.backlight();
  Serial.begin(SERIAL_SPEED);
}

//Main
void loop() {

  lcd.setCursor(0,0);
  lcd.print("--------------------");
  lcd.setCursor(0,1);
  lcd.print("Hello World!");
  lcd.setCursor(0,2);
  lcd.print("I'm an LCD");
  lcd.setCursor(0,3);
  lcd.print("--------------------");
  
}
