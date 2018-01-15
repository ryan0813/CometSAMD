void setup() {
  Serial.begin(9600);
  while(!Serial); Serial.println("Done Serial Init");
}

void loop() {
  // Comet
  Serial.print("A0 "); Serial.println(analogRead(A0)* 3.3 / 1024.0); delay(1000);
  Serial.print("A1 "); Serial.println(analogRead(A1)* 3.3 / 1024.0); delay(1000);
  Serial.print("A2 "); Serial.println(analogRead(A2)* 3.3 / 1024.0); delay(1000);
  Serial.print("A3 "); Serial.println(analogRead(A3)* 3.3 / 1024.0); delay(1000);
  Serial.print("A4 "); Serial.println(analogRead(A4)* 3.3 / 1024.0); delay(1000);
}
