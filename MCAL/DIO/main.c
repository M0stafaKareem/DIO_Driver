#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "Dio_Interface.h"
#include <util/delay.h>

int main()
{

	DIO_u8SetPortDirection(portA, 0x07);

	while(1)
	{
		DIO_u8SetPinValue(portA, pin0__, pinHigh);
		_delay_ms(10000);
		DIO_u8SetPinValue(portA, pin0__, pinLow);

		DIO_u8SetPinValue(portA, pin1__, pinHigh);
		_delay_ms(3000);
		DIO_u8SetPinValue(portA, pin1__, pinLow);

		DIO_u8SetPinValue(portA, pin2__, pinHigh);
		_delay_ms(10000);
		DIO_u8SetPinValue(portA, pin2__, pinLow);
	}
}
