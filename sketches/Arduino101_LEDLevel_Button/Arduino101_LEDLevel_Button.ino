// LED Level with Buttons Sketch for Arduino 101
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
  // initialize pin 10 for input
  pinMode(10, INPUT);
  // enable internal pull-up resistor
  digitalWrite(10, HIGH);
  // initialize pin 11 for input
  pinMode(11, INPUT);
  // enable internal pull-up resistor
  digitalWrite(11, HIGH);
}

// use a global variable to track the current level
int level = 0;

void loop() {
  // if pin 10 reads low...
  if (digitalRead(10) == LOW) {
    // decrease the level, but no lower than 0
    level = max(0, level - 1);
    // set the LED level
    setLed(level);
    // debounce the switch by waiting
    delay(250);
  }
  // if pin 11 reads low...
  if (digitalRead(11) == LOW) {
    // increase the level, but no higher than 8
    level = min(8, level + 1);
    // set the LED level
    setLed(level);
    // debounce the switch by waiting
    delay(250);
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
