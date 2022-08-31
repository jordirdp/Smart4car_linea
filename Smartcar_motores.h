
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#ifndef _Smartcar_motores_h
#define _Smartcar_motores_h

#include <Arduino.h>
#include "Smartcar_L298N.h"

class Smartcar_motores {

  public:
    void Init ();
    void Stop () const;
    void Forward (int speed) const;
    void Backward (int speed) const;
    void TurnLeft (int speed) const;
    void TurnRight (int speed) const;
    void HardLeft (int speed) const;
    void HardRight (int speed) const;

  private:
    Smartcar_L298N _motorLeft;
    Smartcar_L298N _motorRight;

};

#endif
