/*
Cruise Stalk Functional States
  ON -> (+/-) 5MPH <-> (+/-) 1MPH 
  SET -> (-)
  RESUME -> (+)
  CANCEL -> Disable
*/

#include <SPI.h>
#include <mcp_can.h>

MCP_CAN CAN(10);

void setup() {
  Serial.begin(115200);
  while(CAN_OK != CAN.begin(CAN_500KBPS)) {
    Serial.println("CAN BUS initialization failed...");
    Serial.println("Retrying......");
  }
  Serial.println("CAN BUS initialized successfully!");
}

void loop() {
  Serial.println("emu v0.1");
  
}
