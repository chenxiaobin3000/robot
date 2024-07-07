#include <Arduino.h>
#include "base.h"
#include "ble.h"
#include "pwm.h"

void loop() {
  loopBLE();
  loopPWM();
}

void setup() {
  Serial.begin(115200);
  initBLE();
  initPWM();
}
