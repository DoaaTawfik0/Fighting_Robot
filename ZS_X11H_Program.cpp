
#include "Arduino.h"

#include "ZS_X11H_Interface.h"



/****************************************************************************************************/
/*****************************************   Robot Functions  ***************************************/
/****************************************************************************************************/



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidInitialize.                              ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Initialize Motors used For Moving Robot            ****/
/****************************************************************************/
/****************************************************************************/
void Robot_voidInitialize(void)
{
    /***** 1-> Right Motor Pins Initialization ****/
    pinMode(ROBOT_RM_DIR_PIN, OUTPUT);
    pinMode(ROBOT_RM_BRAKE_PIN, OUTPUT);
    pinMode(ROBOT_RM_PWM_PIN, OUTPUT);

    /***** 2-> Left Motor Pins Initialization ****/
    pinMode(ROBOT_LM_DIR_PIN, OUTPUT);
    pinMode(ROBOT_LM_BRAKE_PIN, OUTPUT);
    pinMode(ROBOT_LM_PWM_PIN, OUTPUT);
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidMove_Forward.                            ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Move Robot in Forward Direction                    ****/
/** NOTE --> Robot spead is pased on valuse comes from joystick [PWM]   
 *           and still should be handled in this Function.... 
 *           Two Motors Should Approximately have the same speed         ****/
/****************************************************************************/
/****************************************************************************/
void Robot_voidMove_Forward(void)
{
    /** 1-> Right Motor Rotate in Default Direction [DIR = 1] **/
    digitalWrite(ROBOT_RM_DIR_PIN, HIGH);

    /** 2-> Left Motor Rotate in Default Direction [DIR = 1] **/
    digitalWrite(ROBOT_LM_DIR_PIN, HIGH);

    /** 3-> SET Robot spead pased on valuse comes from joystick [PWM] */
    /*We might do mapping here between value comes from joystick[0-1023] to [0-255]*/

}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidMove_Backward.                           ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Move Robot in Backward Direction                   ****/
/** NOTE --> Robot spead is pased on valuse comes from joystick [PWM]   
 *           and still should be handled in this Function.... 
 *           Two Motors Should Approximately have the same speed         ****/
/****************************************************************************/
/****************************************************************************/
void Robot_voidMove_Backward(void)
{
    /** 1-> Right Motor Rotate in Reverse Direction [DIR = 0] **/
    digitalWrite(ROBOT_RM_DIR_PIN, LOW);

    /** 2-> Left Motor Rotate in Reverse Direction [DIR = 0] **/
    digitalWrite(ROBOT_LM_DIR_PIN, LOW);

    /** 3-> SET Robot spead pased on valuse comes from joystick [PWM] */
    /*We might do mapping here between value comes from joystick[0-1023] to [0-255]*/
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidMove_Right.                              ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Turn Robot to Right Direction                      ****/
/** NOTE --> Robot spead is pased on valuse comes from joystick [PWM]   
 *           and still should be handled in this Function.... 
 *           Two Motors Should Approximately have the same speed         ****/
/****************************************************************************/
/****************************************************************************/
void Robot_voidMove_Right(void)
{
    /** 1-> Right Motor Rotate in Reverse Direction [DIR = 0] **/
    digitalWrite(ROBOT_RM_DIR_PIN, LOW);

    /** 2-> Left Motor Rotate in Default Direction [DIR = 1] **/
    digitalWrite(ROBOT_LM_DIR_PIN, HIGH);

    /** 3-> SET Robot spead pased on valuse comes from joystick [PWM] */
    /*We might do mapping here between value comes from joystick[0-1023] to [0-255]*/
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidMove_Left.                               ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Turn Robot to Left Direction                       ****/
/** NOTE --> Robot spead is pased on valuse comes from joystick [PWM]   
 *           and still should be handled in this Function.... 
 *           Two Motors Should Approximately have the same speed         ****/
/****************************************************************************/
/****************************************************************************/
void Robot_voidMove_Left(void)
{
    /** 1-> Right Motor Rotate in Default Direction [DIR = 1] **/
    digitalWrite(ROBOT_RM_DIR_PIN, HIGH);

    /** 2-> Left Motor Rotate in Reverse Direction [DIR = 0] **/
    digitalWrite(ROBOT_LM_DIR_PIN, LOW);

    /** 3-> SET Robot spead pased on valuse comes from joystick [PWM] */
    /*We might do mapping here between value comes from joystick[0-1023] to [0-255]*/
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Robot_voidStop_Motors.                             ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : applying break on robot motors to stop it          ****/
/****************************************************************************/
/****************************************************************************/
void  Robot_voidStop_Motors(void)
{
    /** 1-> Enable Brake for Right Motor [Brake = 1] **/
    digitalWrite(ROBOT_RM_BRAKE_PIN, HIGH);

    /** 2-> Enable Brake for Left Motor [Brake = 1] **/
    digitalWrite(ROBOT_LM_BRAKE_PIN, HIGH); 
}

/****************************************************************************************************/
/*****************************************  Weapon Functions  ***************************************/
/****************************************************************************************************/



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Weapon_voidInitialize.                             ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Initialize Motor used For Moving Weapon            ****/
/****************************************************************************/
/****************************************************************************/
void Weapon_voidInitialize(void)
{
    /***** 1-> Weapon Motor Pins Initialization ****/
    pinMode(WEAPON_DIR_PIN, OUTPUT);
    pinMode(WEAPON_BRAKE_PIN, OUTPUT);
    pinMode(WEAPON_PWM_PIN, OUTPUT);
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Weapon_voidMove_Weapon.                            ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Make Weapon Start to Move                          ****/
/** NOTE --> Robot spead is pased on valuse comes from joystick [PWM]   
 *           and still should be handled in this Function....            ****/
/****************************************************************************/
/****************************************************************************/
/****************************************************************************/
/****************************************************************************/
void Weapon_voidMove_Weapon(void)
{
    /** 1-> Weapon Rotates in Default Direction [DIR = 1] **/
    digitalWrite(WEAPON_DIR_PIN, HIGH);

    /** 2-> SET Weapon spead pased on valuse comes from joystick [PWM] */
    /*We might do mapping here between value comes from joystick[0-1023] to [0-255]*/
}



/****************************************************************************/
/****************************************************************************/
/** Function Name   : Weapon_voidStop_Weapon.                            ****/
/** Return Type     : Error_State enum.                                  ****/
/** Arguments       : void                                               ****/
/** Functionality   : Stop Motor used For Weapon                         ****/
/****************************************************************************/
/****************************************************************************/
void Weapon_voidStop_Weapon(void)
{
    /** 1-> Enable Brake for Weapon Motor [Brake = 1] **/
    digitalWrite(WEAPON_BRAKE_PIN, HIGH); 
}
