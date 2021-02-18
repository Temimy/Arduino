// led blinking on/off with push button

/*
  Blink external Led

Turns an external LED on/off with bush Button.

Tools : 2V Led , 220 Ohms Resistance (R1) , Bush button (BB)

Connections :
            * Pin 9 - R1 - Led (Anode)... Led (Cathod) - GND *
            * Pin 2 - BB ... BB - GND *

Note: Allways check carfully the wires, devices and sensors 
      connections before connect the Arduino to the computer 

created by DR. Alaa Temimy
               18 Feb. 2021
*/
 

// Define pin numbers used for the application
const int LED = 9; // LED SIGNAL OUTPUT PIN NUMBER
const int BUTTON = 2; // BUTTON SIGNAL INPUT PIN NUMBER

// Define boolean function to trace led status when bush button is pressed
boolean cBtn = LOW;   // current statuse of button
boolean beforeBtn = LOW;  // before status of button
boolean btnStatus = LOW;  // monitoring status
boolean ledStatus = true; // led statuse at start


// the setup function runs once when you press reset or power the board
void setup() {
  
  pinMode(LED, OUTPUT); // Initialize digital pin LED as an output.
  pinMode (BUTTON , INPUT); // Initialize digital pin BUTTON as an input.
}

// variable function to return button status

boolean checkBtnStatus(boolean lastUpdate){  // lastUpdate is the input signal
  boolean lastStatus = digitalRead(BUTTON);  // lastStatus is the saved signal 
  if (lastUpdate != lastStatus ){
    lastStatus = digitalRead(BUTTON);
    }
 
  return lastStatus;
   }

// the loop function runs over and over again forever
void loop() {
  // read button status  before pressing
   beforeBtn=  checkBtnStatus(cBtn);

  if ( cBtn == LOW && beforeBtn == HIGH){
      ledStatus = !ledStatus; // changing led statues False / True
        } 
  cBtn = beforeBtn; 
  
  digitalWrite(LED, ledStatus);    // turn the LED ON/off based on True / False
}






  
   /*
   beforeBtn=checkBtnStatus(cBtn); // check button statuse
   
    if(cBtn != beforeBtn){
      ledStatus = !ledStatus;
      digitalWrite(LED, ledStatus);    // turn the LED off by making the voltage LOW 
      cBtn = beforeBtn;     
    } 
    */
      
      
           
