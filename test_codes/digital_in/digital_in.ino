void setup() {
  Serial.begin(9600);
  while(!Serial); Serial.println("Done Serial Init");
  
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  // Skip 6 and 7 (6 is grounded, 7 connects to LED)
  // pinMode(6, INPUT);
  // pinMode(7, INPUT);
  pinMode(8, INPUT);
}

void loop() {  
  Serial.print("D0 "); Serial.println(digitalRead(0)); delay(1000);
  Serial.print("D1 "); Serial.println(digitalRead(1)); delay(1000);
  Serial.print("D2 "); Serial.println(digitalRead(2)); delay(1000);
  Serial.print("D3 "); Serial.println(digitalRead(3)); delay(1000);
  Serial.print("D4 "); Serial.println(digitalRead(4)); delay(1000);
  Serial.print("D5 "); Serial.println(digitalRead(5)); delay(1000);
  // Serial.print("D6 "); Serial.println(digitalRead(6)); delay(1000);
  // Serial.print("D7 "); Serial.println(digitalRead(7)); delay(1000);
  Serial.print("D8 "); Serial.println(digitalRead(8)); delay(1000);
}
