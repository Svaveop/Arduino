void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {
  digitalWrite(13, 255);
  delay(50);
    digitalWrite(13, 0);
  digitalWrite(12, 215);
  delay(50);
    digitalWrite(12, 0);
  digitalWrite(11, 175);
  delay(50);
    digitalWrite(11, 0);
  digitalWrite(10, 135);
  delay(50);
    digitalWrite(10, 0);
  digitalWrite(9, 95);
  delay(50);
    digitalWrite(9, 0);
  digitalWrite(8, 55);
  delay(50);
    digitalWrite(8, 0);
  digitalWrite(6, 15);
  delay(50);
    digitalWrite(7, 255);
  delay(50);
  digitalWrite(7, 0);
}

// Arduino UNO
