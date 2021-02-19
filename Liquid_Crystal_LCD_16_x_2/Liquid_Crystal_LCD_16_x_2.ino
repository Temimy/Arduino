// Liquid Crystal 16 x 2 Display

/*
  Printing messages using LCD 16x2

  Tools : LCD 16x2

  Connections :
               - LCD Pin GND - GND -
               - LCD Pin VCC - 5 volt -
               - LCD Pin SDA - A4 -
               - LCD Pin SCL - A5 -

  Note: Allways check carfully the wires, devices and sensors
      connections before connect the Arduino to the computer

  created by DR. Alaa Temimy
               19 Feb. 2021
*/

#include <Wire.h> // Define code library
#include <LiquidCrystal_I2C.h> // Define code library

LiquidCrystal_I2C lcd(0x27, 16, 2); // Define lcd parameters

void setup() {
  Wire.begin(); // Initialize code library
  lcd.begin(16, 2); // Initialize lcd : number of columns x number of rows
  lcd.backlight(); // Initialize backlight to be on
  lcd.setCursor(0, 0); // Initialize cursor location
}

void loop() {
  lcd.backlight();  // turn back light on ... blinking of lcd
  delay(1000);
  lcd.setCursor(0, 0); // at the egining of first row
  lcd.print(" Hello Dr.");
  lcd.setCursor(0, 1); // at the begining of first row
  lcd.print(" Alaa temimy ");
  delay(1000);
  lcd.noBacklight(); // turn back light off ... blinking of lcd
  delay(1000);
}
