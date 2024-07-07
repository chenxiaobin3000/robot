#include "pwm.h"
#include <Arduino.h>
#include "base.h"
#include "calc.h"

const int freq = 50;       // 频率(20ms周期)
const int resolution = 8;  // 分辨率

void initPWM() {
  pinMode(2, OUTPUT);
  ledcAttach(LED1, freq, resolution);
  ledcWrite(LED1, calculatePWM(80));
  delay(100);
  ledcAttach(LED2, freq, resolution);
  ledcWrite(LED2, calculatePWM(90));
  delay(100);
  ledcAttach(LED3, freq, resolution);
  ledcWrite(LED3, calculatePWM(0));
  delay(100);
  ledcAttach(LED4, freq, resolution);
  ledcWrite(LED4, calculatePWM(0));
  delay(100);
  ledcAttach(LED5, freq, resolution);
  ledcWrite(LED5, calculatePWM(0));
  delay(100);
  ledcAttach(LED6, freq, resolution);
  ledcWrite(LED6, calculatePWM(0));
  delay(100);
  ledcAttach(LED7, freq, resolution);
  ledcWrite(LED7, calculatePWM(0));
  delay(100);
  ledcAttach(LED8, freq, resolution);
  ledcWrite(LED8, calculatePWM(0));
  delay(500);
}

void loopPWM() {
  digitalWrite(2, HIGH);
  ledcWrite(LED1, calculatePWM(80));
  delay(1000);
  ledcWrite(LED1, calculatePWM(80));
  delay(1000);
  digitalWrite(2, LOW);
  delay(100);
}
