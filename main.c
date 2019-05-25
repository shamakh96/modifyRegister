/*
 * main.c
 *
 *  Created on: May 24, 2019
 *      Author: r
 */



#include <avr/io.h>
#include <util/delay.h>

#include "reg_mod.h"



int main ()
{

	DDRA = 0xFF ;
	PORTA = 0x00 ;



	while (1)
	{

		PORTA = 0b11111111 ;

		_delay_ms (500);

		MODI_REG (PORTA ,0,0) ;

	/*	PORTA |=( BIT0_VALUE << 0) |
				( BIT1_VALUE << 1) |
				( BIT2_VALUE << 2) |
				( BIT3_VALUE << 3) |
				( BIT4_VALUE << 4) |
				( BIT5_VALUE << 5) |
				( BIT6_VALUE << 6) |
				( BIT7_VALUE << 7) ;

		PORTA &=~( !BIT0_VALUE << 0) &
				~( !BIT1_VALUE << 1) &
				~( !BIT2_VALUE << 2) &
				~( !BIT3_VALUE << 3) &
				~( !BIT4_VALUE << 4) &
				~( !BIT5_VALUE << 5) &
				~( !BIT6_VALUE << 6) &
				~( !BIT7_VALUE << 7) ;
*/


		_delay_ms (500);

	}


}
