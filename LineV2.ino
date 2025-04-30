//v2 better one (use this instead of v1)
//with ultrasonic now

int distance;
int duration;

void setup() {
  pinMode(A2, OUTPUT);
  pinMode(A3, INPUT);
  Serial.begin(9600);
}

void loop() {
  ultraSonic();
}
void ultraSonic(){  
  digitalWrite(A2, LOW);
  delayMicroseconds(20);
  digitalWrite(A2, HIGH);
  delayMicroseconds(10);
  digitalWrite(A2, LOW);
  duration = pulseIn(A3, HIGH);
  distance = duration * 0.034 / 2;
  Serial.print("Distance: ");
  Serial.println(distance);
}
