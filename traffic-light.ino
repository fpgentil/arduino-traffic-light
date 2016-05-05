/*
Traffic light project using Arduino
*/

const int pinRed = 13;
const int pinYellow = 12;
const int pinGreen = 11;

const int RED_GREEN_DELAY = 3000;
const int YELLOW_DELAY = 1000;

void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinYellow, OUTPUT);
  pinMode(pinGreen, OUTPUT);
}

void loop() {
  flashPin(pinRed, RED_GREEN_DELAY);
  flashPin(pinYellow, YELLOW_DELAY);
  flashPin(pinGreen, RED_GREEN_DELAY);
}

void flashPin(int pinLight, int timeDelay) {
  digitalWrite(pinLight, HIGH);
  delay(timeDelay);
  digitalWrite(pinLight, LOW);
}