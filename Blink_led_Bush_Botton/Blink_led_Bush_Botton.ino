// led blinking on/off with push button

/*
  Blink external Led

Turns an external LED on/off with bush Button.

Tools : 2V Led , 220 Ohms Resistance (R1) , Push Button Switch (S1)( Normal closed)

Connections :
            * Pin 9 - R1 - Led (Anode)... Led (Cathod) - GND *
            * Pin 2 - S1 ... S1 - GND *

Note: Allways check carfully the wires, devices and sensors 
      connections before connect the Arduino to the computer 

created by DR. Alaa Temimy
               19 Feb. 2021
*/
 

// Define pin numbers used for the application
const int LED = 9; // LED SIGNAL OUTPUT PIN NUMBER
const int BUTTON = 2; // BUTTON SIGNAL INPUT PIN NUMBER
int Tmi =500 ; // Re-pushing Button time interval
int cBtn = 0 ; // current statuse of button
boolean ledStatus = true; // led statuse at start

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode (BUTTON , INPUT); // Initialize digital pin BUTTON as an input
  pinMode(LED, OUTPUT); // Initialize digital pin LED as an output.
  digitalWrite(LED, ledStatus); // turn led on at starting
  pinMode (BUTTON , INPUT); // Initialize digital pin BUTTON as an input.
  Serial.begin (9600);
        }

// the loop function runs over and over again forever
void loop() {
  // read button status
    cBtn= digitalRead(BUTTON);
    Serial.println (cBtn);
   // delay (1000);

  if ( cBtn == 1){  // Button is pushed
      ledStatus = !ledStatus; // changing led statues False / True
      digitalWrite(LED, ledStatus);    // turn the LED ON/off based on True / False
      
        } 
        
      delay (Tmi);
  
  
 
}






  
   /*
   beforeBtn=checkBtnStatus(cBtn); // check button statuse
   
    if(cBtn != beforeBtn){
      ledStatus = !ledStatus;
      digitalWrite(LED, ledStatus);    // turn the LED off by making the voltage LOW 
      cBtn = beforeBtn;     
    } 
    */
      
      
           
