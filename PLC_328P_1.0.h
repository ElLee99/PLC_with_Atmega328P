/*
 * PLC_328P_1.h
 *
 * Created: 03/02/2023 06:25:04 p. m.
 *  Author: Johan Lee
 */ 


#ifndef PLC_328P_1.0_H_
#define PLC_328P_1.0_H_

	#include <avr/io.h>	
	
	#define RXD_PIN					PORTD0
	#define TXD_PIN					PORTD1
	
	#define SS_PIN					PORTB2
	#define MOSI_PIN				PORTB3
	#define MISO_PIN				PORTB4
	#define SCK_PIN					PORTB5
	
	#define SDA_PIN					PORTC4
	#define SCL_PIN					PORTC5
	
	#define DIGITAL_INPUT_0			PORTD2				/*INT0*/
	#define DIGITAL_INPUT_1			PORTD3				/*INT1*/
	#define DIGITAL_INPUT_2			PORTC2
	#define DIGITAL_INPUT_3			PORTC3
	
	#define ANALOG_INPUT_0			PORTC0
	#define ANALOG_INPUT_1			PORTC1

	#define OUTPUT_0				PORTD6				/*OCOA Transistor output*/
	#define OUTPUT_1				PORTD5				/*OCOB Transistor output*/
	#define OUTPUT_2				PORTB1				/*OC1A Transistor output*/
	#define OUTPUT_3				PORTD4				/*Relay Output*/
	#define OUTPUT_4				PORTD7				/*Relay Output*/
	#define OUTPUT_5				PORTB0				/*Relay Output*/

#endif /* PLC_328P_1.0_H_ */