
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

// Incluye Headers
#include "Pinout.h"
#include "Constants.h"

// Define LCD
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd (0x27, 16, 2);

// Define ultrasonidos HC-SR04
#include <NewPing.h>
NewPing sonar (TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);

// Define servo SG90
#include <Servo.h>
Servo myservo;



void setup() {

  // Inicia LCD
  lcd.begin();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor (0,0);
  lcd.print("****Smart4car****");
  lcd.setCursor (0,1);
  lcd.print("---Modo Test----");
  delay (TiempoEspera);

  // Inicia servo
  myservo.attach(SERVO_PIN);

  // Inicia sensores de línea
  pinMode (SENSOR_LL_PIN, INPUT);
  pinMode (SENSOR_L_PIN, INPUT);
  pinMode (SENSOR_R_PIN, INPUT);
  pinMode (SENSOR_RR_PIN, INPUT);

  // Inicia encoders
  interrupts();
  pinMode (ENCODER_L_PIN,INPUT_PULLUP);
  pinMode (ENCODER_R_PIN,INPUT_PULLUP);
  attachInterrupt (digitalPinToInterrupt (ENCODER_L_PIN), Encoder_L, FALLING);
  attachInterrupt (digitalPinToInterrupt (ENCODER_R_PIN), Encoder_R, FALLING);
}



void loop() {


}
