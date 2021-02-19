// Temperature and Humidity sensor DHT11

/*
  Reading and Printing of Temperature and Humididty in consul serial monitor

  Tools : DHT11 sensor

  Connections :
              DHT11 Pin GND - GND
              DHT11 Pin VCC - 5 volt
              DHT11 Pin DATA - A0

  Note: Allways check carfully the wires, devices and sensors
      connections before connect the Arduino to the computer

  created by DR. Alaa Temimy
               19 Feb. 2021
*/

#include "dht.h" // Defint DHT11 code library
#define dht_apin A0  // Define pin A0 for DHT11 data input

dht DHT; // Difine DHT sensor variable

void setup() {
  Serial.begin (9600); // Setting serial port (command window ), check the band number carfully
  Serial.println ("DHT11 Humidity & Temperature Sensor \n\n");
}

void loop() {
  DHT.read11(dht_apin); // reading sensor
  // printing of data
  Serial.println (" ");
  Serial.print ("DHT11 Humidity ");
  Serial.print (DHT.humidity);
  Serial.print ("%");

  Serial.print ("   DHT11 Temperature ");
  Serial.print (DHT.temperature);
  Serial.print ("C");

  delay (2000); // delay between readings

}
