
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#include "Pinout.h"
#include "Constants.h"
#include <Arduino.h>
#include "Smartcar_L298N.h"
#include "Smartcar_motores.h"

void Smartcar_motores::Init() {
  _motorLeft.Init(IN1_PIN, IN2_PIN, ENA_PIN);
  _motorRight.Init(IN3_PIN, IN4_PIN, ENB_PIN);
}

void Smartcar_motores::Stop() const {
  _motorLeft.Stop();
  _motorRight.Stop();
}

void Smartcar_motores::Forward(int speed) const {
  _motorLeft.Forward(speed);
  _motorRight.Forward(speed);
}

void Smartcar_motores::Backward(int speed) const {
  _motorLeft.Backward(speed);
  _motorRight.Backward(speed);
}

void Smartcar_motores::TurnLeft(int speed) const {
  _motorLeft.Stop();
  _motorRight.Forward(speed);
}

void Smartcar_motores::TurnRight(int speed) const {
  _motorLeft.Forward(speed);
  _motorRight.Stop();
}

void Smartcar_motores::HardLeft(int speed) const {
  _motorLeft.Backward(speed);
  _motorRight.Forward(speed);
}

void Smartcar_motores::HardRight(int speed) const {
  _motorLeft.Forward(speed);
  _motorRight.Backward(speed);
}
