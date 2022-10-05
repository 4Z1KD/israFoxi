#ifndef _USER_CONFIG_H
#define _USER_CONFIG_H
#include <Arduino.h>

/*************** Change only these rows **************/
const double FREQUENCY = 433.500; //This is the frequency of the fox
const char Latitude[] = "32.1234";
const char Longitude[] = "35.5678";




























































/*************** Dם NOT change anything below this line **************/
const uint32_t FREQ_RAW = FREQUENCY*1000000/396.728515625;
const uint32_t FOXI_FREQ2 = (FREQ_RAW >> 16);
const uint32_t FOXI_FREQ1 = (FREQ_RAW >> 8);
const uint32_t FOXI_FREQ0 = (FREQ_RAW & 0xFF);
#endif //USER_CONFIG_H
