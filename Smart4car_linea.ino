
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

// Incluye Headers
#include "Pinout.h"
#include "Constants.h"

// Define LCD
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);

// Define Motores
#include "Smartcar_motores.h"
Smartcar_motores Smart4car;


void setup() {

  // Inicia LCD
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("****Smart4car****");
  lcd.setCursor (0,1);
  lcd.print("---Modo Linea---");
  delay (250);

  // Inicia Motores
  Smart4car.Init();

  // Inicia sensores de línea
  pinMode (SENSOR_LL_PIN, INPUT);
  pinMode (SENSOR_L_PIN, INPUT);
  pinMode (SENSOR_R_PIN, INPUT);
  pinMode (SENSOR_RR_PIN, INPUT);

}


void loop() {

  Smart4robot.Forward(120);
  delay(waitTime);
  Smart4robot.TurnLeft(120);
  delay(waitTime);
  Smart4robot.TurnRight(120);
  delay(waitTime);
  Smart4robot.Backward(120);
  delay(waitTime);

}
