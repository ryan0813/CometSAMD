#include <SPI.h>
#include "wiring_private.h" // pinPeripheral() function
      
SPIClass mySPI (&sercom2, 4, 0, 5, SPI_PAD_0_SCK_3, SERCOM_RX_PAD_1);

char outByte [20] = "Sercom SPI test";

char inByte; // variable which stores the value of the byte received from SPI bus
int i = 0;   

void setup() {
  Serial.begin(9600);
  mySPI.begin();
     
  // Assign pins 0, 4, 5 to SERCOM_ALT
  pinPeripheral(0, PIO_SERCOM_ALT); // SCK
  pinPeripheral(4, PIO_SERCOM_ALT); // MISO
  pinPeripheral(5, PIO_SERCOM_ALT); // MOSI

  delay(100);
}
     
void loop() {
  Serial.print("Test | ");           
  for(i = 0; outByte [i] != '\0'; i ++) // send and receive the bytes of the string
  {
    inByte = mySPI.transfer(outByte [i]);
    Serial.write(inByte);   
  }
  Serial.println();  
  delay(1000);  
}
