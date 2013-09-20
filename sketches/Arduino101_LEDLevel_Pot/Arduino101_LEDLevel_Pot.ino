// LED Level from Potentiometer Sketch for Arduino 101
// by Nick Borko

// function to set the LEDs to a specific level
void setLed(int level) {
  // iterate through the pins
  for (int pin = 2; pin <= 9; pin += 1) {
    // compare the pin to the level...
    if (pin < level + 2) {
      // LED is on
      digitalWrite(pin, HIGH);
    } else {
      // LED is off
      digitalWrite(pin, LOW);
    }
  }
}

void setup() {
  int pin;
  // initialize pins 2-9 to be output pins
  for (pin = 2; pin <= 9; pin += 1) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  // read the value from the potentiometer
  // this will be a value from 0-1023
  int raw = analogRead(A0);
  // we add one to the reading to make it an even 1-1024,
  // then divide this value by 128 since we have 8 LEDs
  int scaled = (raw + 1) / 128;
  // set the LED Level
  setLed(scaled);
  // smooth out the reading a bit
  delay(50);
}

/*
 This work is licensed under the Creative Commons
 Attribution-NonCommercial-ShareAlike 3.0 Unported
 License. To view a copy of this license, visit
 http://creativecommons.org/licenses/by-nc-sa/3.0/
 or send a letter to:

 Creative Commons, 444 Castro Street
 Suite 900
 Mountain View, California, 94041, USA.
*/
