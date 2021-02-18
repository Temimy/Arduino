/*
  Blink external Led

  Turns an external LED on for one second, then off for one second, repeatedly.

Tools : 2V Led , 220 Ohms Resistance (R1)

Connections :
            * Pin 9 - R1 - Led (Anode)... Led (Cathod) - GND *

Note: Allways check carfully the wires, devices and sensors 
      connections before connect the Arduino to the computer 

created by DR. Alaa Temimy
               18 Feb. 2021
*/
 // Define pin numbers used for the application
int led =9; // Define integer Number for the led power supply pin number

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
