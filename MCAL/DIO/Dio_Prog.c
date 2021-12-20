#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "Dio_Register.h"
#include "Dio_Interface.h"

					/*Set pin's direction at any port */
u8 DIO_u8SetPinDirection(enu_port Copy_enuPort,enu_pin Copy_enuPin,enu_direction Copy_enudirection)
{
	/*case input*/
	if( Copy_enudirection == output)
	{
		switch(Copy_enuPort)
		{
		case portA : SET_BIT(DDRA, Copy_enuPin); break;
		case portB : SET_BIT(DDRA, Copy_enuPin); break;
		case portC : SET_BIT(DDRA, Copy_enuPin); break;
		case portD : SET_BIT(DDRA, Copy_enuPin); break;
		}
	}
	else
		/*case output*/
		if(Copy_enudirection == input)
	{
		switch(Copy_enuPort)
		{
		case portA : CLR_BIT(DDRA, Copy_enuPin); break;
		case portB : CLR_BIT(DDRA, Copy_enuPin); break;
		case portC : CLR_BIT(DDRA, Copy_enuPin); break;
		case portD : CLR_BIT(DDRA, Copy_enuPin); break;
		}
	}
}

					/*Set pin's value at any port*/
u8 DIO_u8SetPinValue(enu_port Copy_enuPort,enu_pin Copy_enuPin,enu_value Copy_enuValue)
{
	/*case high*/
	if(Copy_enuValue==pinHigh)
	{
		switch(Copy_enuPort)
		{
		case portA: SET_BIT(PORTA,Copy_enuPin);break;
		case portB: SET_BIT(PORTA,Copy_enuPin);break;
		case portC: SET_BIT(PORTA,Copy_enuPin);break;
		case portD: SET_BIT(PORTA,Copy_enuPin);break;
		}
	}
	else
		/*case low*/
	if(Copy_enuValue==pinLow)
	{
		switch(Copy_enuPort)
		{
			case portA: CLR_BIT(PORTA,Copy_enuPin);break;
			case portB: CLR_BIT(PORTA,Copy_enuPin);break;
			case portC: CLR_BIT(PORTA,Copy_enuPin);break;
			case portD: CLR_BIT(PORTA,Copy_enuPin);break;
		}
	}
}

					/*read pin's value at any port*/
u8 DIO_u8GetPinValue(enu_port Copy_enuPort,enu_pin Copy_enuPin,u8* pu8Value)
{
	switch(Copy_enuPort)
	{
		case portA: *pu8Value= GET_BIT(PINA,Copy_enuPin);break;
		case portB: *pu8Value= GET_BIT(PINA,Copy_enuPin);break;
		case portC: *pu8Value= GET_BIT(PINA,Copy_enuPin);break;
		case portD: *pu8Value= GET_BIT(PINA,Copy_enuPin);break;
	}
}




					/*Set port's direction*/
u8 DIO_u8SetPortDirection(enu_port Copy_enuPort,u8 Copy_u8Port_Direction){

	switch(Copy_enuPort)
	{
		case portA :
			DDRA=Copy_u8Port_Direction;break;

		case portB :
			DDRB=Copy_u8Port_Direction;break;

		case portC :
			DDRC=Copy_u8Port_Direction;break;

		case portD :
			DDRD=Copy_u8Port_Direction;break;
	}
}

					/*Set port's value*/
u8 DIO_u8SetPortValue(enu_port Copy_enuPort,u8 Copy_u8Port_Value){

	switch(Copy_enuPort)
	{
		case portA :
			PORTA=Copy_u8Port_Value;break;

		case portB :
			PORTB=Copy_u8Port_Value;break;

		case portC :
			PORTC=Copy_u8Port_Value;break;

		case portD :
			PORTD=Copy_u8Port_Value;break;
	}
}

