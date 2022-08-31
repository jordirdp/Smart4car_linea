
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#include "Smartcar_L298N.h"
#include "Pinout.h"
#include <Arduino.h>

void Smartcar_motores::Init() {
  _motorLeft.Init(IN1_PIN, IN2_PIN, ENA_PIN);
  _motorRight.Init(IN1_PIN, IN2_PIN, ENA_PIN);
}

void Smartcar_motores::Stop() const {
  _motorLeft.Stop();
  _motorRight.Stop();
}

void Smartcar_motores::Forward(byte speed) const {
  _motorLeft.Forward(speed);
  _motorRight.Forward(speed);
}

void Smartcar_motores::Backward(byte speed) const {
  _motorLeft.Backward(speed);
  _motorRight.Backward(speed);
}

void Smartcar_motores::TurnLeft(byte speed) const {
  _motorLeft.Stop();
  _motorRight.Forward(speed);
}

void Smartcar_motores::TurnRight(byte speed) const {
  _motorLeft.Forward(speed);
  _motorRight.Stop();
}
