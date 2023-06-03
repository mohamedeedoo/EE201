void setup() {
  // put your setup code here, to run once:
  const int interval = 1500; //1.5 seconds
  const int pin1 = 2;
  const int pin2 = 3;
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
}

void loop() {
  digitalWrite(pin1, HIGH);
  digitalWrite(pin2, LOW);
  delay(interval);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, HIGH);
  delay(interval);
}
