void setup() {
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  analogWrite(9, random(120)+135);
  analogWrite(6, random(120)+135);
  analogWrite(5, random(120)+135);
  delay(random(100));
}
