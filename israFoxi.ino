/*
  A simple Fox Hunting Transmitter
*/

#include <SPI.h>
#include "foxi_config.h"

void(* resetFunc) (void) = 0;//declare reset function at address 0
int c = 0;

Foxi foxi;
const unsigned int preSignaDelay = 1000;
const unsigned int postSignaDelay = 29000;

void setup() {
  Serial.begin(9600);
  foxi.setup();
}

void loop() {
  delay(preSignaDelay);
  foxi.begin();
  foxi.sendMessage();
  foxi.end();
  delay(postSignaDelay);
  if (c++ >= 5)
  {
    resetFunc(); //call reset 
  }  
}
