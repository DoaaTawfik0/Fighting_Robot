#include <Arduino.h>

#include "BTS7960_Interface.h"

/*
 * Constructor for the BTS7960 class.
 * Initializes pin numbers for motor control.
 */
BTS7960::BTS7960(int RPwmPin, int LPwmPin, int ENPin)
    : RPwmPin(RPwmPin), LPwmPin(LPwmPin), ENPin(ENPin) {}

/*
 * Flipper_voidInit
 * Configures motor control pins as outputs and stops the motor.
 */
void BTS7960::Flipper_voidInit(void) {
  pinMode(RPwmPin, OUTPUT);
  pinMode(LPwmPin, OUTPUT);
  pinMode(ENPin, OUTPUT);
  Flipper_voidStop();
}

/*
 * Flipper_voidUp_HighSpeed
 * Moves motor forward at full speed.
 */
void BTS7960::Flipper_voidUp_HighSpeed(void) {
  analogWrite(RPwmPin, 255);  // Full speed forward
  analogWrite(LPwmPin, 0);    // No reverse
  digitalWrite(ENPin, HIGH);  // Motor enabled
}

/*
 * Flipper_voidUp_LowSpeed
 * Moves motor forward at half speed.  (NOTE : could be edited )
 */
void BTS7960::Flipper_voidUp_LowSpeed(void) {
  analogWrite(RPwmPin, 128);  // Half speed forward
  analogWrite(LPwmPin, 0);    // No reverse
  digitalWrite(ENPin, HIGH);  // Motor enabled
}

/*
 * Flipper_voidDown_HighSpeed
 * Moves motor in reverse at full speed.
 */
void BTS7960::Flipper_voidDown_HighSpeed(void) {
  analogWrite(RPwmPin, 0);    // No forward
  analogWrite(LPwmPin, 255);  // Full speed reverse
  digitalWrite(ENPin, HIGH);  // Motor enabled
}

/*
 * Flipper_voidDown_LowSpeed
 * Moves motor in reverse at half speed.
 */
void BTS7960::Flipper_voidDown_LowSpeed(void) {
  analogWrite(RPwmPin, 0);    // No forward
  analogWrite(LPwmPin, 128);  // Half speed reverse
  digitalWrite(ENPin, HIGH);  // Motor enabled
}

/*
 * Flipper_voidStop
 * Stops the motor by setting both PWM pins to zero and disabling the motor.
 */
void BTS7960::Flipper_voidStop(void) {
  analogWrite(RPwmPin, 0);   // Stop forward movement
  analogWrite(LPwmPin, 0);   // Stop reverse movement
  digitalWrite(ENPin, LOW);  // Motor disabled
}
