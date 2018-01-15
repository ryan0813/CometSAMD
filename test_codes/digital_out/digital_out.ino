void setup() {

  Serial.begin(9600);
  while(!Serial); Serial.println("Done Serial Init");

  // Check Digital Output
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  //Skip 6, grounded in old version
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);

  for (int i = 0; i < 8; i++){
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
    delay(100);
  }
}

void loop() {
}
