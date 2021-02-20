
/*
  Buzzer

  Tools : Buzzer (B) , Resistance (100 ohms) (R1)

  Connections :
               - Pin 9 - R1 - B (ve+) .... B (ve-) - GND


  Note: Allways check carfully the wires, devices and sensors
      connections before connect the Arduino to the computer

  created by DR. Alaa Temimy
               20 Feb. 2021
*/

// Define pin number for Buzzer +ve
const int buzzer = 3;

// Define setup parameters
void setup() {
  pinMode (buzzer , OUTPUT); // set buzzer pin as output
  noTone (buzzer); // buzzer initially no sound
}

// Difine loop
void loop () {

  tone (buzzer , 4000) ; // send 4000 Hz sound signal
  delay (1000) ; // signal continue for 1 second
  noTone (buzzer); // stop sound
  delay (1000) ; // delay 1 sec
}
