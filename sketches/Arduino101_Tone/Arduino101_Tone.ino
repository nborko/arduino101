// Tone Example Sketch for Arduino 101
// by Nick Borko

void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  tone(10, 293, 250);
  delay(250);
  tone(10, 329, 300);
  delay(400);
  tone(10, 261, 350);
  delay(500);
  tone(10, 130, 450);
  delay(550);
  tone(10, 196, 1000);
  delay(5000);
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
