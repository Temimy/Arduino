/*
  Sweeping of Servo motor
   Runing and controlling of servo motor working direction and angle

  Tools : Servo motor (M) , Resistance (100 ohms) (R1)

  Connections :
               - (Red )  - 5 volt
               - (Brown) - GND
               - (Yellow) - Pin 9

  Note: Allways check carfully the wires, devices and sensors
        connections before connect the Arduino to the computer

  created by DR. Alaa Temimy
               20 Feb. 2021
*/

#include <Servo.h> // Define servo code library

Servo myservo;  // create servo object to control a servo
                // twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position at angle of zero

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  myservo.write(0); // tell servo to go to position zero
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
                                        // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
