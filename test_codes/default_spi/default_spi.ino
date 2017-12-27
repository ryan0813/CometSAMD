
#include <SPI.h> // including the SPI library
 
char outByte [20] = "SPI Test"; // string to be send and received via SPI port
char inByte; // variable which stores the value of the byte received from SPI bus
int i = 0;                                                         
 
void setup(){
  pinMode(9, OUTPUT);
  pinMode(12, OUTPUT);

  digitalWrite(9, HIGH);
  digitalWrite(12, HIGH);
  
  Serial.begin(9600);    
  SPI.begin(); 
  delay(100);  
}
 
void loop(){ 
  Serial.print("Test | ");            
  for(i = 0; outByte[i] != '\0'; i++){
    inByte = SPI.transfer(outByte[i]);
    Serial.write(inByte);   
  }
  Serial.println();
  
  delay(1000);  
}
