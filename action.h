/**
 * describe:    动作控制
 * author:      创想酷玩
 * data:        2024-07-24
 */
#ifndef _ACTION_H_
#define _ACTION_H_

class CAction {
public:
  CAction(int max);
  void reset();
  void straight();

private:
  virtual void frame0() = 0;
  virtual void frame1() = 0;
  virtual void frame2() = 0;
  virtual void frame3() = 0;
  virtual void frame4() = 0;
  virtual void frame5() = 0;
  virtual void frame6() = 0;
  virtual void frame7() = 0;
  virtual void frame8() = 0;
  virtual void frame9() = 0;
  virtual void frame10() = 0;

  int m_max;
  int m_step;
};

#endif  //_ACTION_H_
