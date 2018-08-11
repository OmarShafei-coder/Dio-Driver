/*
 * DIO_prog.c
 *
 *  Created on: Aug 11, 2018
 *      Author: Omar Ahmed
 */

#include "TYPES.h"
#include "UTIL.h"
#include "DIO_interface.h"
#include "DIO_private.h"

/* IO Pins */
void SetPinValue(u8 port , u8 pin, u8 val)
{
		if (val == HIGH)
		{
			/* Check on the Required PORT Number */
			switch (port)
			{
				case u8PORTA: SET_BIT(PORTA_REG,pin); break;
				case u8PORTB: SET_BIT(PORTB_REG,pin); break;
				case u8PORTC: SET_BIT(PORTC_REG,pin); break;
				case u8PORTD: SET_BIT(PORTD_REG,pin); break;
				default	 	:						  break;
			}

		}

		else if (val == LOW)
		{
			/* Check on the Required PORT Number */
			switch (port)
			{
				case u8PORTA: CLR_BIT(PORTA_REG,pin); break;
				case u8PORTB: CLR_BIT(PORTB_REG,pin); break;
				case u8PORTC: CLR_BIT(PORTC_REG,pin); break;
				case u8PORTD: CLR_BIT(PORTD_REG,pin); break;
				default	 	:						  break;
			}
		}

		else;
}

 u8 GetPinValue(u8 port, u8 pin)
{
	/* Define Local Variable to get the BIT Value */
	u8 u8ResultLocal;
	/* Make sure that the Port ID and Pin ID are in the valid range */
	if ((port <= u8PORTD) && (pin <= PIN7))
	{
		/* Check on the Required PORT Number */
		switch (port)
		{
			case u8PORTA: u8ResultLocal= GET_BIT(PINA_REG,pin); break;
			case u8PORTB: u8ResultLocal= GET_BIT(PINB_REG,pin); break;
			case u8PORTC: u8ResultLocal= GET_BIT(PINC_REG,pin); break;
			case u8PORTD: u8ResultLocal= GET_BIT(PIND_REG,pin); break;
			default	 	:						 			    break;
		}
	}

	else
	{
		/* return 0xff in case of error in the Pin ID or PORT ID */
		u8ResultLocal = 0xFF;
	}

	return u8ResultLocal;
}

 void SetPinDirection (u8 port, u8 pin, u8 dir)
{
	if ( dir == OUTPUT )
	{
		/* Check on the Required PORT Number */
		switch (port)
		{
			case u8PORTA: SET_BIT(DDRA_REG,pin); break;
			case u8PORTB: SET_BIT(DDRB_REG,pin); break;
			case u8PORTC: SET_BIT(DDRC_REG,pin); break;
			case u8PORTD: SET_BIT(DDRD_REG,pin); break;
			default	 	:						 break;
		}
	}

	else if ( dir == INPUT )
	{
		/* Check on the Required PORT Number */
		switch (port)
		{
			case u8PORTA: CLR_BIT(DDRA_REG,pin); break;
			case u8PORTB: CLR_BIT(DDRB_REG,pin); break;
			case u8PORTC: CLR_BIT(DDRC_REG,pin); break;
			case u8PORTD: CLR_BIT(DDRD_REG,pin); break;
			default	 	:						 break;
		}
	}

	else;
}


/* IO Ports */
 void SetPortDirection (u8 port, u8 dir)
{
		/* Check on the Required PORT Number */
		switch (port)
		{
			case     u8PORTA: DDRA_REG = dir; break;
			case     u8PORTB: DDRB_REG = dir; break;
			case     u8PORTC: DDRC_REG = dir; break;
			case     u8PORTD: DDRD_REG = dir; break;
			default			:		          break;
		}
}

 void SetPortValue (u8 port, u8 val)
{
	/* Check on the Required PORT Number */
	switch (port)
	{
		case     u8PORTA: PORTA_REG = val; break;
		case     u8PORTB: PORTB_REG = val; break;
		case     u8PORTC: PORTC_REG = val; break;
		case     u8PORTD: PORTD_REG = val; break;
		default			:        		   break;
	}
}


