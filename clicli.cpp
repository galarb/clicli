#include "clicli.h"
#include "Arduino.h"
//namespace utilities {

cli::cli() {}

void cli::begin() {
  Serial.begin(115200);
}
//}