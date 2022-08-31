
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#ifndef _Smartcar_L298N_h
#define _Smartcar_L298N_h

#include <Arduino.h>
#include "Pinout.h"

class Smartcar_L298N {

  public:
    void Init (int IN1_PIN, int IN2_PIN, int ENA_PIN);
    void Stop() const;
    void Forward (int speed) const;
    void Backward (int speed) const;

  private:
    int _IN1_PIN;
    int _IN2_PIN;
    int _ENA_PIN;

};

#endif
