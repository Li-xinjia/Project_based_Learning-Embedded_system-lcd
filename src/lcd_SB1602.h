/*
 * lcd_SB1602.h
 *
 *  Created on: 2015/01/15
 */

#ifndef LCD_SB1602_H_
#define LCD_SB1602_H_

#include "inc/hw_memmap.h"
#include "my_i2c.h"
#include "my_util.h"

//*****************************************************************************
//                      [Co:RS:0:0:0:0:0:0]
// RS = 0 : Command
// RS = 1 : Data
// Co = 0 : Burst
// Co = 1 : Single
//*****************************************************************************
#define SB1602_DATA_SINGLE    0xC0
#define SB1602_DATA_BURST     0x40
#define SB1602_COMMAND_SINGLE 0x80
#define SB1602_COMMAND_BURST  0x00

#define SB1602_SLAVE_ADDRESS 0x3E

//*****************************************************************************
// initialize
//*****************************************************************************
void initLCD(void);
//*****************************************************************************
// command LCD
//*****************************************************************************
extern inline void commandLCD(uint8_t cmd);
//*****************************************************************************
// set address LCD
//*****************************************************************************
extern inline void setAddressLCD(uint8_t x, uint8_t y);
//*****************************************************************************
// write text LCD
//*****************************************************************************
extern inline void writeTextLCD(uint8_t *text, uint8_t length);

extern inline void clearLCD(void);

#endif /* LCD_SB1602_H_ */
