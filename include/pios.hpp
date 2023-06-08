# 1 "pios.h"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "pios.h"
/**
 * \file
 * \copyright  Copyright 2014 PLUX - Wireless Biosignals, S.A.
 * \author     Filipe Silva
 * \version    1.0
 * \date       July 2014
 *
 * \section LICENSE
 
 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 
 */
# 38 "pios.h"
// Pin assignments

 #define SET_DI4 (PORTB |= B(0)) /*
*/
# 40 "pios.h"
 #define CLR_DI4 (PORTB &= ~B(0)) /*
*/
# 40 "pios.h"
 #define ISSET_DI4 (PINB & B(0)) /*
*/
# 40 "pios.h"
 #define BIT_DI4 B(0) /*
*/
# 40 "pios.h"
 #define BITPOS_DI4 0 // I (with pull-up)
 #define SET_STAT_BT (PORTB |= B(1)) /*
*/
# 41 "pios.h"
 #define CLR_STAT_BT (PORTB &= ~B(1)) /*
*/
# 41 "pios.h"
 #define ISSET_STAT_BT (PINB & B(1)) /*
*/
# 41 "pios.h"
 #define BIT_STAT_BT B(1) /*
*/
# 41 "pios.h"
 #define BITPOS_STAT_BT 1 // I (with pull-up)
 #define SET_DO1 (PORTB |= B(2)) /*
*/
# 42 "pios.h"
 #define CLR_DO1 (PORTB &= ~B(2)) /*
*/
# 42 "pios.h"
 #define ISSET_DO1 (PINB & B(2)) /*
*/
# 42 "pios.h"
 #define BIT_DO1 B(2) /*
*/
# 42 "pios.h"
 #define BITPOS_DO1 2 // O
 #define SET_DO2 (PORTB |= B(3)) /*
*/
# 43 "pios.h"
 #define CLR_DO2 (PORTB &= ~B(3)) /*
*/
# 43 "pios.h"
 #define ISSET_DO2 (PINB & B(3)) /*
*/
# 43 "pios.h"
 #define BIT_DO2 B(3) /*
*/
# 43 "pios.h"
 #define BITPOS_DO2 3 // O
 #define SET_DO3 (PORTB |= B(4)) /*
*/
# 44 "pios.h"
 #define CLR_DO3 (PORTB &= ~B(4)) /*
*/
# 44 "pios.h"
 #define ISSET_DO3 (PINB & B(4)) /*
*/
# 44 "pios.h"
 #define BIT_DO3 B(4) /*
*/
# 44 "pios.h"
 #define BITPOS_DO3 4 // O
 #define SET_DO4 (PORTB |= B(5)) /*
*/
# 45 "pios.h"
 #define CLR_DO4 (PORTB &= ~B(5)) /*
*/
# 45 "pios.h"
 #define ISSET_DO4 (PINB & B(5)) /*
*/
# 45 "pios.h"
 #define BIT_DO4 B(5) /*
*/
# 45 "pios.h"
 #define BITPOS_DO4 5 // O

 #define SET_A4 (PORTC |= B(0)) /*
*/
# 47 "pios.h"
 #define CLR_A4 (PORTC &= ~B(0)) /*
*/
# 47 "pios.h"
 #define ISSET_A4 (PINC & B(0)) /*
*/
# 47 "pios.h"
 #define BIT_A4 B(0) /*
*/
# 47 "pios.h"
 #define BITPOS_A4 0 // Analog I (ACC)
 #define SET_A3 (PORTC |= B(1)) /*
*/
# 48 "pios.h"
 #define CLR_A3 (PORTC &= ~B(1)) /*
*/
# 48 "pios.h"
 #define ISSET_A3 (PINC & B(1)) /*
*/
# 48 "pios.h"
 #define BIT_A3 B(1) /*
*/
# 48 "pios.h"
 #define BITPOS_A3 1 // Analog I (ECG)
 #define SET_A2 (PORTC |= B(2)) /*
*/
# 49 "pios.h"
 #define CLR_A2 (PORTC &= ~B(2)) /*
*/
# 49 "pios.h"
 #define ISSET_A2 (PINC & B(2)) /*
*/
# 49 "pios.h"
 #define BIT_A2 B(2) /*
*/
# 49 "pios.h"
 #define BITPOS_A2 2 // Analog I (EDA)
 #define SET_A1 (PORTC |= B(3)) /*
*/
# 50 "pios.h"
 #define CLR_A1 (PORTC &= ~B(3)) /*
*/
# 50 "pios.h"
 #define ISSET_A1 (PINC & B(3)) /*
*/
# 50 "pios.h"
 #define BIT_A1 B(3) /*
*/
# 50 "pios.h"
 #define BITPOS_A1 3 // Analog I (EMG)
// PC4-PC5 not used
 #define SET_A6 (PORTC |= B(6)) /*
*/
# 52 "pios.h"
 #define CLR_A6 (PORTC &= ~B(6)) /*
*/
# 52 "pios.h"
 #define ISSET_A6 (PINC & B(6)) /*
*/
# 52 "pios.h"
 #define BIT_A6 B(6) /*
*/
# 52 "pios.h"
 #define BITPOS_A6 6 // Analog I (BAT)
 #define SET_A5 (PORTC |= B(7)) /*
*/
# 53 "pios.h"
 #define CLR_A5 (PORTC &= ~B(7)) /*
*/
# 53 "pios.h"
 #define ISSET_A5 (PINC & B(7)) /*
*/
# 53 "pios.h"
 #define BIT_A5 B(7) /*
*/
# 53 "pios.h"
 #define BITPOS_A5 7 // Analog I (LUX)

// PD0: RXD
// PD1: TXD
 #define SET_LED_BAT (PORTD |= B(2)) /*
*/
# 57 "pios.h"
 #define CLR_LED_BAT (PORTD &= ~B(2)) /*
*/
# 57 "pios.h"
 #define ISSET_LED_BAT (PIND & B(2)) /*
*/
# 57 "pios.h"
 #define BIT_LED_BAT B(2) /*
*/
# 57 "pios.h"
 #define BITPOS_LED_BAT 2 // O
 #define SET_LED_STAT (PORTD |= B(3)) /*
*/
# 58 "pios.h"
 #define CLR_LED_STAT (PORTD &= ~B(3)) /*
*/
# 58 "pios.h"
 #define ISSET_LED_STAT (PIND & B(3)) /*
*/
# 58 "pios.h"
 #define BIT_LED_STAT B(3) /*
*/
# 58 "pios.h"
 #define BITPOS_LED_STAT 3 // O
 #define SET_GP (PORTD |= B(4)) /*
*/
# 59 "pios.h"
 #define CLR_GP (PORTD &= ~B(4)) /*
*/
# 59 "pios.h"
 #define ISSET_GP (PIND & B(4)) /*
*/
# 59 "pios.h"
 #define BIT_GP B(4) /*
*/
# 59 "pios.h"
 #define BITPOS_GP 4 // I (with pull-up)
 #define SET_DI1 (PORTD |= B(5)) /*
*/
# 60 "pios.h"
 #define CLR_DI1 (PORTD &= ~B(5)) /*
*/
# 60 "pios.h"
 #define ISSET_DI1 (PIND & B(5)) /*
*/
# 60 "pios.h"
 #define BIT_DI1 B(5) /*
*/
# 60 "pios.h"
 #define BITPOS_DI1 5 // I (with pull-up)
 #define SET_DI2 (PORTD |= B(6)) /*
*/
# 61 "pios.h"
 #define CLR_DI2 (PORTD &= ~B(6)) /*
*/
# 61 "pios.h"
 #define ISSET_DI2 (PIND & B(6)) /*
*/
# 61 "pios.h"
 #define BIT_DI2 B(6) /*
*/
# 61 "pios.h"
 #define BITPOS_DI2 6 // I (with pull-up)
 #define SET_DI3 (PORTD |= B(7)) /*
*/
# 62 "pios.h"
 #define CLR_DI3 (PORTD &= ~B(7)) /*
*/
# 62 "pios.h"
 #define ISSET_DI3 (PIND & B(7)) /*
*/
# 62 "pios.h"
 #define BIT_DI3 B(7) /*
*/
# 62 "pios.h"
 #define BITPOS_DI3 7 // I (with pull-up)
