#include "clicli.h"
#include "Arduino.h"
//namespace utilities {

clicli::clicli() {}

void clicli::begin() {
  Serial.begin(115200);
}
//}