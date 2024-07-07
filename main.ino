/**
 * describe:    主文件
 * author:      创想酷玩
 * data:        2024-07-01
 */
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
