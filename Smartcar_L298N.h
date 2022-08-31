
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#ifndef _Smartcar_L298N_h
#define _Smartcar_L298N_h

#include <Arduino.h>

class Smartcar_L298N {

  public:
    void Init (byte IN1_PIN, byte IN2_PIN, byte ENA_PIN);
    void Stop() const;
    void Forward (byte speed) const;
    void Backward (byte speed) const;

  private:
    byte _IN1_PIN;
    byte _IN2_PIN;
    byte _ENA_PIN;

};

#endif
