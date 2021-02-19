
/*
  Reading temperature and humidity and Printing values using LCD 16x2

  Tools : DHT11 , LCD 16x2

  Connections :
               - LCD Pin GND - GND -
               - LCD Pin VCC - 5 volt -
               - LCD Pin SDA - A4 -
               - LCD Pin SCL - A5 -

               - DHT11 Pin GND - GND -
               - DHT11 Pin VCC - 5 volt -
               - DHT11 Pin DATA - A0 -

  Note:
  1- Refer to DHT11 and LCD 16x2 code for more information
  2- Allways check carfully the wires, devices and sensors
      connections before connect the Arduino to the computer

  created by DR. Alaa Temimy
               19 Feb. 2021
*/


// Define code libraries
// liquid crystal library
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

//DHT library
#include "dht.h"
#define dht_apin A0
dht DHT;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin (9600); // Setting serial port (command window ), check the band number carfully
  Serial.println ("DHT11 Humidity & Temperature Sensor \n\n");

  Wire.begin();
  lcd.begin(16, 2);
  lcd.backlight();
  lcd.setCursor(0, 0);
}

void loop() {
  DHT.read11(dht_apin); // reading Temp. and Humidity

  // Printing in consul
  Serial.println (" ");
  Serial.print ("DHT11 Humidity ");
  Serial.print (DHT.humidity);
  Serial.print ("%");

  Serial.print ("   DHT11 Temperature ");
  Serial.print (DHT.temperature);
  Serial.print ("C");

  // Printing in LCD
  lcd.backlight();
  delay(1000);

  // printing humidity
  lcd.setCursor(0, 0);
  lcd.print("Humid. :");
  lcd.print(DHT.humidity);
  lcd.print(" %");

  // printing temperature
  lcd.setCursor(0, 1);
  lcd.print("Temp.  :");
  lcd.print(DHT.temperature);
  lcd.print(" C");

  delay(4000);
  lcd.noBacklight();
  delay(1000);
}
