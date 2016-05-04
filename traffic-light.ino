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
  digitalWrite(pinRed, HIGH);
  delay(RED_GREEN_DELAY);
  digitalWrite(pinRed, LOW);

  digitalWrite(pinYellow, HIGH);
  delay(YELLOW_DELAY);
  digitalWrite(pinYellow, LOW);

  digitalWrite(pinGreen, HIGH);
  delay(RED_GREEN_DELAY);
  digitalWrite(pinGreen, LOW);
}
