
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#ifndef _Smartcar_motores_h
#define _Smartcar_motores_h

#include <Arduino.h>
#include "Smartcar_L298N.h"

class Motores {

  public:
    void Init ();
    void Stop ();
    void Forward (byte speed) const;
    void Backward (byte speed) const;
    void TurnLeft (byte speed) const;
    void TurnRight (byte speed) const;

  private:
    Smartcar_L298N _motorLeft;
    Smartcar_L298N _motorRight;

};

#endif
