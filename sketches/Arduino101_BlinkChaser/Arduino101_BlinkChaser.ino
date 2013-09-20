// Blink Chaser Sketch for Arduino 101
// by Nick Borko

void setup() {
  int pin;
  // initialize pins 2-9 to be output pins
  for (pin = 2; pin <= 9; pin += 1) {
    pinMode(pin, OUTPUT);
  }
}

void loop() {
  int pin;
  // loop from 2 to 8
  for (pin = 2; pin < 9; pin += 1) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
  }
  // loop again from 9 to 3
  for (pin = 9; pin > 2; pin -= 1) {
    digitalWrite(pin, HIGH);
    delay(100);
    digitalWrite(pin, LOW);
  }
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
