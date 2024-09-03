#ifndef  ZS_X11_H_INTERFACE_H_
#define  ZS_X11_H_INTERFACE_H_



/************************** Definitinos For Robot Left Motor Control Pins  ********************************/
#define   ROBOT_LM_DIR_PIN         2
#define   ROBOT_LM_BRAKE_PIN       4
#define   ROBOT_LM_PWM_PIN         3

/************************** Definitinos For Robot Right Motor Control Pins ********************************/
#define   ROBOT_RM_DIR_PIN         7   
#define   ROBOT_RM_BRAKE_PIN       8
#define   ROBOT_RM_PWM_PIN         5

/************************** Definitinos For Weapon Motor Control Pins  ************************************/
#define   WEAPON_DIR_PIN           12
#define   WEAPON_BRAKE_PIN         13
#define   WEAPON_PWM_PIN           6


/************************************** Motor Driver Direction enum  ***********************************/
typedef enum
{
    REVERSE_DIRECTION ,
    DEFAULT_DIRECTION 
}ZS_MD_DIRECTION_t; 


/************************************** Motor Driver Break enum     ***********************************/
typedef enum
{
    DISABLE_BRAKE ,
    ENABLE_BRAKE 
}ZS_MD_BRAKE_t; 
    

/************************************** Functions ProtoTypes       ***********************************/

void  Robot_voidInitialize(void);
void  Robot_voidMove_Forward(void);
void  Robot_voidMove_Backward(void);
void  Robot_voidMove_Right(void);
void  Robot_voidMove_Left(void);
void  Robot_voidStop_Motors(void);


void  Weapon_voidInitialize(void);
void  Weapon_voidMove_Weapon(void);
void  Weapon_voidStop_Weapon(void);


#endif
