/*
  diotest test digital outputs

  Hardware: wire each digital output to an LED , resister e.g., 330 ohm, then ground.

  Description
  Turn on all the DIO ports one at a time
  Turn off all of the DIO ports one at a time a little faster

  Created 24 August 2024 by David Martin

  License: MIT
  https://github.com/hamsterlabs/diotest
  //https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  int i = 0;
  for( i = 6; i < 14 ; i++)
    pinMode(LED_BUILTIN, OUTPUT);
}


// the loop function runs over and over again forever
void loop() {
  for (int i = 0; i < 14; i++ ){
    digitalWrite(i, HIGH);  // turn the LED on (HIGH is the voltage level)
    delay(1000);                      // wait for a second
  }
    for (int i = 0; i < 14; i++ ){
      digitalWrite(i, LOW);   // turn the LED off by making the voltage LOW
      delay(750);                      // wait for a second
    } 
}
