/**
 * describe:    计算旋转需要的电流
 * author:      创想酷玩
 * data:        2024-07-01
 */
#include "calc.h"

// 0-180度。20ms周期，高电平0.5-2.5ms，对应0-180度角度
int calcPWM(int degree) {
  const float deadZone = 6.4;  //对应0.5ms（0.5ms/(20ms/256）) 舵机转动角度与占空比的关系：(角度/90+0.5)*1023/20
  const float max = 32;        //对应2.5ms
  if (degree < 0) {
    degree = 0;
  }
  if (degree > 180) {
    degree = 180;
  }
  return (int)(((max - deadZone) / 180) * degree + deadZone);
}
