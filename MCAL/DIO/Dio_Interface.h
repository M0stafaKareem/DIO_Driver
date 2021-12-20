#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
/*Port Enum*/
typedef enum {
	portA,
	portB,
	portC,
	portD
	
}enu_port;

/*Pin Enum*/
typedef enum{
	pin0__ ,
	pin1__ ,
	pin2__ ,
	pin3__ ,
	pin4__ ,
	pin5__ ,
	pin6__ ,
	pin7__ ,
	pin8__ 
}enu_pin;

/*direction Enum*/
typedef enum
{
	input,
	output
}enu_direction ;

typedef enum
{
	pinLow ,
	pinHigh ,
	portLow=0x00,
	portHigh = 0xff
}enu_value;

/*Set pin's direction at any port */
u8 DIO_u8SetPinDirection(enu_port Copy_enuPort,enu_pin Copy_enuPin,enu_direction Copy_enuDirection);
/*Set pin's value at any port*/
u8 DIO_u8SetPinValue(enu_port Copy_enuPort,enu_pin Copy_enuPin,enu_value Copy_enuValue);
/*read pin's value at any port*/
u8 DIO_u8GetPinValue(enu_port Copy_enuPort,enu_pin Copy_enuPin,u8* pu8Value);


/*Set port's direction*/
u8 DIO_u8SetPortDirection(enu_port Copy_enuPort,enu_direction Copy_enuDirection);
/*Set port's value*/
u8 DIO_u8SetPortDirection(enu_port Copy_enuPort,u8 Copy_u8Port_Direction);


#endif
