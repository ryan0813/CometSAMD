#include <Arduino.h>           // required before wiring_private.h
#include "wiring_private.h"    // pinPeripheral() function

Uart Serial2 (&sercom1, 2, 3, SERCOM_RX_PAD_1, UART_TX_PAD_2);
Uart Serial3 (&sercom2, 4, 5, SERCOM_RX_PAD_1, UART_TX_PAD_0);

void SERCOM1_Handler() {
  Serial2.IrqHandler();
}

void SERCOM2_Handler() {
  Serial3.IrqHandler();
}


void setup() {

  // Check Serial (SERCOM 5)
  Serial.begin(9600);
  while(!Serial); Serial.println("Done Serial Init");

  while(!Serial.available());
  if (Serial.available()){
    Serial.println(Serial.read());
  }

  Serial.print("Serial OK");

  
  // Check Serial 1 (SERCOM 0)
  Serial1.begin(9600);
  while(!Serial1); Serial.println("Done Serial1 Init");

  while(!Serial1.available()){
    Serial1.println("A");
    Serial.print(Serial1.read());
  }

  Serial.println("Serial 1 OK");

  Serial2.begin(9600);
  pinPeripheral(2, PIO_SERCOM);
  pinPeripheral(3, PIO_SERCOM);

  // Check Serial 2 (SERCOM 1)
  while(!Serial2); Serial.println("Done Serial2 Init");
  while(!Serial2.available()){
    Serial2.println("B");
    if(Serial2.available()) Serial.print(Serial2.read());
  }

  Serial.println("Serial2 OK");

  Serial3.begin(9600);
  pinPeripheral(4, PIO_SERCOM_ALT);
  pinPeripheral(5, PIO_SERCOM_ALT);

  // Check Serial 3 (SERCOM 2)
  while(!Serial3); Serial.println("Done Serial3 Init");
  while(!Serial3.available()){
    Serial3.println("C");
    if(Serial3.available()) Serial.print(Serial3.read());
  }

  Serial.println("Serial3 OK"); 
}

void loop() {}
