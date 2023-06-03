void setup() {
  const int pin7 = 7;
  pinMode(pin7, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(pin7);

  if (value == HIGH) {
    Serial.println("Hello World!");
  } else {
    Serial.println("It's 2023");
  }
}
