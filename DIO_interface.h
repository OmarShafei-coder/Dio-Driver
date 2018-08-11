/*
 * DIO_int.h
 *
 *  Created on: Aug 11, 2018
 *      Author: Omar Ahmed
 */

#ifndef DIO_INT_H_
#define DIO_INT_H_


/********************************************************/
/*******************Public Definitions*******************/
/********************************************************/

/* Port Defines */
#define u8PORTA		0
#define u8PORTB		1
#define u8PORTC		2
#define u8PORTD		3

/* PIN Defines */
#define PIN0		0
#define PIN1		1
#define PIN2		2
#define PIN3		3
#define PIN4		4
#define PIN5		5
#define PIN6		6
#define PIN7		7



/* Digital I/O value */
#define HIGH		1
#define LOW			0

/* Digital I/O Direction */
#define INPUT		0
#define OUTPUT		1

/* IO Pins Function */
void SetPinValue(u8 port , u8 pin, u8 val);

u8 GetPinValue(u8 port, u8 pin);

void SetPinDirection(u8 port, u8 pin, u8 dir);

/* IO Ports Functions */
void SetPortDirection(u8 port, u8 dir);

void SetPortValue(u8 port, u8 val);

#endif /* DIO_INT_H_ */
