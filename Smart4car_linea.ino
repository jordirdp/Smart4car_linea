
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

  // Prepara LCD
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("---Modo Linea---");

}


void loop() {

  // Lectura sensores de línea
  int Sensor_LL = digitalRead (SENSOR_LL_PIN);
  int Sensor_L = digitalRead (SENSOR_L_PIN);
  int Sensor_R = digitalRead (SENSOR_R_PIN);
  int Sensor_RR = digitalRead (SENSOR_RR_PIN);

  Smart4car.Forward(speed);

  if (Sensor_LL == LOW) {
    Smart4car.HardLeft (speed);
    lcd.setCursor (0,1);
    lcd.print(Sensor_LL);
  }
  if (Sensor_L == LOW) {
    Smart4car.TurnLeft (speed);
    lcd.setCursor (5,1);
    lcd.print(Sensor_L);
  }
  if (Sensor_R == LOW) {
    Smart4car.TurnRight (speed);
    lcd.setCursor (10,1);
    lcd.print(Sensor_R);
  }
  if (Sensor_RR == LOW) {
    Smart4car.HardRight(speed);
    lcd.setCursor (15,1);
    lcd.print(Sensor_RR);
  }
  
}
