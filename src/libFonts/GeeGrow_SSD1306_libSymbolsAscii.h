/*!
 * @file GeeGrow_SSD1306_libSymbolsAscii.h
 *
 * This is an addon library for the GeeGrow SSD1306 128x32 display,
   which implements support of ASCII special symbols
 * https://www.geegrow.ru
 *
 * @section author Author
 * Written by Anton Pomazanov
 *
 * @section license License
 * BSD license, all text here must be included in any redistribution.
 *
 */

#ifndef _GEEGROW_SSD1306_LIBSYMBOLS_ASCII_H_
#define _GEEGROW_SSD1306_LIBSYMBOLS_ASCII_H_

#include <Arduino.h>
#include <avr/pgmspace.h>
#include <GeeGrow_SSD1306_defines.h>

/**************************************************************************/
/*!
    @brief  Class that allows to use ASCII special symbols
*/
/**************************************************************************/
class GeeGrow_SSD1306_libSymbolsAscii {
	public:
		GeeGrow_SSD1306_libSymbolsAscii(){}
		~GeeGrow_SSD1306_libSymbolsAscii(){}
		uint8_t* getBitMap(char _char);
};

/**************************************************************************/
/*!
    @brief  Bitmaps for ASCII special symbols
*/
/**************************************************************************/
const uint8_t fontLibSymbolsAscii[] PROGMEM = {
	0x00, 0x00, 0x00, 0x00, 0x00,	// ' '
	0x00, 0x00, 0x5F, 0x00, 0x00,	// !
	0x00, 0x07, 0x00, 0x07, 0x00,	// "
	0x14, 0x7F, 0x14, 0x7F, 0x14,	// #
	0x24, 0x2A, 0x7F, 0x2A, 0x12,	// $
	0x23, 0x13, 0x08, 0x64, 0x62,	// %
	0x36, 0x49, 0x56, 0x20, 0x50,	// &
	0x00, 0x08, 0x07, 0x03, 0x00,	// '
	0x00, 0x1C, 0x22, 0x41, 0x00,	// (
	0x00, 0x41, 0x22, 0x1C, 0x00,	// )
	0x2A, 0x1C, 0x7F, 0x1C, 0x2A,	// *
	0x08, 0x08, 0x3E, 0x08, 0x08,	// +
	0x00, 0x80, 0x70, 0x30, 0x00,	// ,
	0x08, 0x08, 0x08, 0x08, 0x08,	// -
	0x00, 0x00, 0x60, 0x60, 0x00,	// .
	0x20, 0x10, 0x08, 0x04, 0x02,	// /
	0x00, 0x00, 0x14, 0x00, 0x00,	// :
	0x00, 0x40, 0x34, 0x00, 0x00,	// ;
	0x00, 0x08, 0x14, 0x22, 0x41,	// <
	0x14, 0x14, 0x14, 0x14, 0x14,	// =
	0x00, 0x41, 0x22, 0x14, 0x08,	// >
	0x02, 0x01, 0x59, 0x09, 0x06,	// ?
	0x3E, 0x41, 0x5D, 0x59, 0x4E,	// @
	0x00, 0x7F, 0x41, 0x41, 0x41,	// [
	0x02, 0x04, 0x08, 0x10, 0x20,	// '\'
	0x00, 0x41, 0x41, 0x41, 0x7F,	// ]
	0x04, 0x02, 0x01, 0x02, 0x04,	// ^
	0x40, 0x40, 0x40, 0x40, 0x40,	// _
	0x00, 0x03, 0x07, 0x08, 0x00,	// `
	0x00, 0x08, 0x36, 0x41, 0x00,	// {
	0x00, 0x00, 0x7F, 0x00, 0x00,	// |
	0x00, 0x41, 0x36, 0x08, 0x00,	// }
	0x08, 0x04, 0x08, 0x10, 0x08 	// ~
};

#endif /* _GEEGROW_SSD1306_LIBSYMBOLS_ASCII_H_ */
