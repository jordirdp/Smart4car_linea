
/* Project: Smart4car */
/* Author: Jordi Rodriguez */

#pragma once

// Sensor HC-SR04 con librería NewPing
#define MAX_DISTANCE 100                // distancia máxima para ping

// Servo SG90 con librería Servo (Arduino)
byte pos = 0;                            // posicions del servo

// Sensores de línea TCRT5000
boolean Sensor_LL;
boolean Sensor_L;
boolean Sensor_R;
boolean Sensor_RR;

// Encoders rotativos
volatile int Counter_L = 0;
volatile int Counter_R = 0;
