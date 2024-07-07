/**
 * describe:    动作操作
 * author:      创想酷玩
 * data:        2024-07-01
 */
#include "pwm.h"
#include <Arduino.h>
#include "base.h"
#include "calc.h"

const int freq = 50;       // 频率(20ms周期)
const int resolution = 8;  // 分辨率

void initPWM() {
  pinMode(2, OUTPUT);
  ledcAttach(PWM1, freq, resolution);
  ledcWrite(PWM1, calcPWM(80));
  delay(100);
  ledcAttach(PWM2, freq, resolution);
  ledcWrite(PWM2, calcPWM(90));
  delay(100);
  ledcAttach(PWM3, freq, resolution);
  ledcWrite(PWM3, calcPWM(0));
  delay(100);
  ledcAttach(PWM4, freq, resolution);
  ledcWrite(PWM4, calcPWM(0));
  delay(100);
  ledcAttach(PWM5, freq, resolution);
  ledcWrite(PWM5, calcPWM(0));
  delay(100);
  ledcAttach(PWM6, freq, resolution);
  ledcWrite(PWM6, calcPWM(0));
  delay(100);
  ledcAttach(PWM7, freq, resolution);
  ledcWrite(PWM7, calcPWM(0));
  delay(100);
  ledcAttach(PWM8, freq, resolution);
  ledcWrite(PWM8, calcPWM(0));
  delay(500);
}

void loopPWM() {
  digitalWrite(2, HIGH);
  action1();
  digitalWrite(2, LOW);
  delay(100);
}

void action1() {
  ledcWrite(PWM1, calcPWM(80));
  delay(1000);
  ledcWrite(PWM1, calcPWM(80));
  delay(1000);
}

void action2() {
}
