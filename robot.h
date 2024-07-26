/**
 * describe:    机器人动作控制
 * author:      创想酷玩
 * data:        2024-07-26
 */
#ifndef _ROBOT_H_
#define _ROBOT_H_

#include "action.h"

class CRobot : public CAction {
public:
  CRobot();

  virtual void frame0();
  virtual void frame1();
  virtual void frame2();
  virtual void frame3();
  virtual void frame4();
  virtual void frame5();
  virtual void frame6();
  virtual void frame7();
  virtual void frame8();
  virtual void frame9();
  virtual void frame10();
};

#endif  //_ROBOT_H_
