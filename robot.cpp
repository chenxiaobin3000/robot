#include "robot.h"
#include <Arduino.h>
#include "calc.h"
#include "base.h"

const int freq = 50;       // 频率(20ms周期)
const int resolution = 8;  // 分辨率

CRobot::CRobot()
  : CAction(5) {
  ledcAttach(PWM1, freq, resolution);
  ledcAttach(PWM2, freq, resolution);
  ledcAttach(PWM4, freq, resolution);
  ledcAttach(PWM5, freq, resolution);
  ledcAttach(PWM7, freq, resolution);
  ledcAttach(PWM8, freq, resolution);
  ledcAttach(PWM10, freq, resolution);
  ledcAttach(PWM11, freq, resolution);
}

void CRobot::frame0() {
  ledcWrite(PWM1, calcPWM(90));
  ledcWrite(PWM4, calcPWM(90));
  ledcWrite(PWM7, calcPWM(90));
  ledcWrite(PWM10, calcPWM(90));


  ledcWrite(PWM2, calcPWM(90));
  ledcWrite(PWM5, calcPWM(90));
  ledcWrite(PWM8, calcPWM(90));
  ledcWrite(PWM11, calcPWM(90));
  delay(100);
}

void CRobot::frame1() {
  ledcWrite(PWM2, calcPWM(30));
}

void CRobot::frame2() {
  ledcWrite(PWM1, calcPWM(60));
}

void CRobot::frame3() {
}

void CRobot::frame4() {
}

void CRobot::frame5() {
  ledcWrite(PWM2, calcPWM(90));
  delay(100);
  ledcWrite(PWM1, calcPWM(90));
  delay(100);
  /*ledcWrite(PWM4, calcPWM(120));
    delay(100);
    ledcWrite(PWM5, calcPWM(150));
    delay(100);
    ledcWrite(PWM4, calcPWM(90));
    delay(100);
    ledcWrite(PWM5, calcPWM(90));
    delay(100);*/
  /*ledcWrite(PWM8, calcPWM(150));
    delay(100);
    ledcWrite(PWM7, calcPWM(120));
    delay(100);
    ledcWrite(PWM8, calcPWM(90));
    delay(100);
    ledcWrite(PWM7, calcPWM(90));
    delay(100);*/
  /*ledcWrite(PWM10, calcPWM(60));
    delay(100);
    ledcWrite(PWM11, calcPWM(30));
    delay(100);
    ledcWrite(PWM10, calcPWM(90));
    delay(100);
    ledcWrite(PWM11, calcPWM(90));
    delay(100);*/
}

void CRobot::frame6() {
}

void CRobot::frame7() {
}

void CRobot::frame8() {
}

void CRobot::frame9() {
}

void CRobot::frame10() {
}

/*ledcWrite(PWM2, calcPWM(30));
    delay(100);
    ledcWrite(PWM1, calcPWM(60));
    delay(100);
    ledcWrite(PWM2, calcPWM(90));
    delay(100);
    ledcWrite(PWM1, calcPWM(90));
    delay(100);*/
/*ledcWrite(PWM4, calcPWM(120));
    delay(100);
    ledcWrite(PWM5, calcPWM(150));
    delay(100);
    ledcWrite(PWM4, calcPWM(90));
    delay(100);
    ledcWrite(PWM5, calcPWM(90));
    delay(100);*/
/*ledcWrite(PWM8, calcPWM(150));
    delay(100);
    ledcWrite(PWM7, calcPWM(120));
    delay(100);
    ledcWrite(PWM8, calcPWM(90));
    delay(100);
    ledcWrite(PWM7, calcPWM(90));
    delay(100);*/
/*ledcWrite(PWM10, calcPWM(60));
    delay(100);
    ledcWrite(PWM11, calcPWM(30));
    delay(100);
    ledcWrite(PWM10, calcPWM(90));
    delay(100);
    ledcWrite(PWM11, calcPWM(90));
    delay(100);*/