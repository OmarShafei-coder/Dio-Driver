/*
 * DIO_priv.h
 *
 *  Created on: Aug 11, 2018
 *      Author: Omar Ahmed
 */

#ifndef DIO_PRIV_H_
#define DIO_PRIV_H_

/* Group A REGisters */
#define PORTA_REG  *((volatile u8*)0x3B)
#define DDRA_REG   *((volatile u8*)0x3A)
#define PINA_REG   *((volatile u8*)0x39)

/* Group B REGisters */
#define PORTB_REG  *((volatile u8*)0x38)
#define DDRB_REG   *((volatile u8*)0x37)
#define PINB_REG   *((volatile u8*)0x36)

/* Group C REGisters */
#define PORTC_REG  *((volatile u8*)0x35)
#define DDRC_REG   *((volatile u8*)0x34)
#define PINC_REG   *((volatile u8*)0x33)

/* Group D REGisters */
#define PORTD_REG  *((volatile u8*)0x32)
#define DDRD_REG   *((volatile u8*)0x31)
#define PIND_REG   *((volatile u8*)0x30)

#endif /* DIO_PRIV_H_ */
