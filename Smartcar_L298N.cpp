
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#include "Smartcar_L298N.h"
#include <Arduino.h>

void Smartcar_L298N::Init(byte IN1_PIN, byte IN2_PIN, byte ENA_PIN) {
  this->_IN1_PIN = IN1_PIN;
  this->_IN2_PIN = IN2_PIN;
  this->_ENA_PIN = ENA_PIN,
  pinMode (_IN1_PIN, OUTPUT),
  pinMode (_IN2_PIN, OUTPUT),
  pinMode (_ENA_PIN, OUTPUT), 
}

void Smartcar_L298N::Stop() const {
  digitalWrite (_IN1_PIN, LOW);
  digitalWrite (_IN2_PIN, LOW);
  digitalWrite (_ENA_PIN, LOW);
}

void Smartcar_L298N::Forward(byte speed) const {
  digitalWrite (_IN1_PIN, HIGH);
  digitalWrite (_IN2_PIN, LOW);
  digitalWrite (_ENA_PIN, speed);
}

void Smartcar_L298N::Backward(byte speed) const {
  digitalWrite (_IN1_PIN, LOW);
  digitalWrite (_IN2_PIN, HIGH);
  digitalWrite (_ENA_PIN, speed);
}
