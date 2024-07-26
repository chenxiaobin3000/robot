#include "action.h"
#include <Arduino.h>

CAction::CAction(int max) {
  m_max = max;
  m_step = 0;
}

void CAction::reset() {
  frame0();
  delay(100);
}

void CAction::straight() {
  if (++m_step > m_max) {
    m_step = 0;
  }
  switch (m_step) {
    case 1:
      frame1();
      break;

    case 2:
      frame2();
      break;

    case 3:
      frame3();
      break;

    case 4:
      frame4();
      break;

    case 5:
      frame5();
      break;

    case 6:
      frame6();
      break;

    case 7:
      frame7();
      break;

    case 8:
      frame8();
      break;

    case 9:
      frame9();
      break;

    case 10:
      frame10();
      break;

    default:
      frame0();
      break;
  }
  delay(100);
}
