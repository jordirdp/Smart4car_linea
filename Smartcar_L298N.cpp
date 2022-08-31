
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#include "Constants.h"
#include "Pinout.h"
#include <Arduino.h>
#include "Smartcar_L298N.h"

void Smartcar_L298N::Init (int IN1_PIN, int IN2_PIN, int ENA_PIN) {
  this->_IN1_PIN = IN1_PIN;
  this->_IN2_PIN = IN2_PIN;
  this->_ENA_PIN = ENA_PIN,
  pinMode (_IN1_PIN, OUTPUT);
  pinMode (_IN2_PIN, OUTPUT);
  pinMode (_ENA_PIN, OUTPUT); 
}

void Smartcar_L298N::Stop() const {
  digitalWrite (_IN1_PIN, LOW);
  digitalWrite (_IN2_PIN, LOW);
  digitalWrite (_ENA_PIN, LOW);
}

void Smartcar_L298N::Forward (int speed) const {
  digitalWrite (_IN1_PIN, HIGH);
  digitalWrite (_IN2_PIN, LOW);
  digitalWrite (_ENA_PIN, speed);
}

void Smartcar_L298N::Backward (int speed) const {
  digitalWrite (_IN1_PIN, LOW);
  digitalWrite (_IN2_PIN, HIGH);
  digitalWrite (_ENA_PIN, speed);
}
