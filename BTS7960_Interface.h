#ifndef BTS7960_INTERFACE_H_
#define BTS7960_INTERFACE_H_

/*
 * Pin Definitions for the Flipper Motor
 *
 * RPWMPIN - Pin connected to the PWM input for Forward direction.
 * LOWMPIN - Pin connected to the PWM input for Reverse direction
 * ENPIN   - Pin connected to the enable input for the motor
 * driver.
 */
#define RPWMPIN 10
#define LOWMPIN 11
#define ENPIN 4

/*
 * BTS7960 Class
 *
 * the class provides an interface for controlling a BTS7960 motor driver.
 */
class BTS7960 {
 public:
  /*
   * Constructor
   *
   * Initializes an instance of the BTS7960 class with the specified pin
   * numbers.
   *
   * Parameters:
   *   RPwmPin - Pin number for (Forward direction PWM).
   *   LPwmPin - Pin number for  (Reverse direction PWM ).
   *   ENPin   - Pin number for the enable signal.
   */
  BTS7960(int RPwmPin, int LPwmPin, int ENPin);

  /*
   * Flipper_voidInit
   *
   * Initializes the pins used by the BTS7960 motor driver as outputs and
   * sets the motor to a stopped state.
   */
  void Flipper_voidInit(void);

  /*
   * Flipper_voidUp_HighSpeed
   *
   * Moves the motor in the forward direction at high speed. The PWM signal
   * for the forward direction is set to full speed, and the reverse direction
   * is zero.
   */
  void Flipper_voidUp_HighSpeed(void);

  /*
   * Flipper_voidUp_LowSpeed
   *
   * Moves the motor in the forward direction at low speed. The PWM signal
   * for the forward direction is set to half speed (based on best trail), and
   * the reverse direction is zero.
   */
  void Flipper_voidUp_LowSpeed(void);

  /*
   * Flipper_voidDown_HighSpeed
   *
   * Moves the motor in the reverse direction at high speed. The PWM signal
   * for the reverse direction is set to full speed, and the forward direction
   * is zero.
   */
  void Flipper_voidDown_HighSpeed(void);

  /*
   * Flipper_voidDown_LowSpeed
   *
   * Moves the motor in the reverse direction at low speed. The PWM signal
   * for the reverse direction is set to half speed, and the forward direction
   * is zero.
   */
  void Flipper_voidDown_LowSpeed(void);

  /*
   * Flipper_voidStop
   *
   * Stops the motor by disabling both the forward and reverse PWM signals
   * and setting the enable pin to low.
   */
  void Flipper_voidStop(void);

 private:
  int RPwmPin;  // Pin for (Forward direction PWM )
  int LPwmPin;  // Pin for  (Reverse direction PWM )
  int ENPin;    // Pin for the enable signal
};

#endif  // BTS7960_INTERFACE_H_
