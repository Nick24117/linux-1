/*
 *  arch/arm/plat-aspeed/include/plat/gpio_irqs.h
 *
 *  Copyright (C) 2012-2020  ASPEED Technology Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _GPIO_IRQS_H_
#define _GPIO_IRQS_H_                 1

#include "include/aspeed.h"

#define GPIO_PORT_NUM		29

#define IRQ_GPIOA0						(IRQ_GPIO_CHAIN_START + 0)
#define IRQ_GPIOA1						(IRQ_GPIO_CHAIN_START + 1)
#define IRQ_GPIOA2						(IRQ_GPIO_CHAIN_START + 2)
#define IRQ_GPIOA3						(IRQ_GPIO_CHAIN_START + 3)
#define IRQ_GPIOA4						(IRQ_GPIO_CHAIN_START + 4)
#define IRQ_GPIOA5						(IRQ_GPIO_CHAIN_START + 5)
#define IRQ_GPIOA6						(IRQ_GPIO_CHAIN_START + 6)
#define IRQ_GPIOA7						(IRQ_GPIO_CHAIN_START + 7)
#define IRQ_GPIOB0						(IRQ_GPIO_CHAIN_START + 8)
#define IRQ_GPIOB1						(IRQ_GPIO_CHAIN_START + 9)
#define IRQ_GPIOB2						(IRQ_GPIO_CHAIN_START + 10)
#define IRQ_GPIOB3						(IRQ_GPIO_CHAIN_START + 11)
#define IRQ_GPIOB4						(IRQ_GPIO_CHAIN_START + 12)
#define IRQ_GPIOB5						(IRQ_GPIO_CHAIN_START + 13)
#define IRQ_GPIOB6						(IRQ_GPIO_CHAIN_START + 14)
#define IRQ_GPIOB7						(IRQ_GPIO_CHAIN_START + 15)
#define IRQ_GPIOC0						(IRQ_GPIO_CHAIN_START + 16)
#define IRQ_GPIOC1						(IRQ_GPIO_CHAIN_START + 17)
#define IRQ_GPIOC2						(IRQ_GPIO_CHAIN_START + 18)
#define IRQ_GPIOC3						(IRQ_GPIO_CHAIN_START + 19)
#define IRQ_GPIOC4						(IRQ_GPIO_CHAIN_START + 20)
#define IRQ_GPIOC5						(IRQ_GPIO_CHAIN_START + 21)
#define IRQ_GPIOC6						(IRQ_GPIO_CHAIN_START + 22)
#define IRQ_GPIOC7						(IRQ_GPIO_CHAIN_START + 23)
#define IRQ_GPIOD0						(IRQ_GPIO_CHAIN_START + 24)
#define IRQ_GPIOD1						(IRQ_GPIO_CHAIN_START + 25)
#define IRQ_GPIOD2						(IRQ_GPIO_CHAIN_START + 26)
#define IRQ_GPIOD3						(IRQ_GPIO_CHAIN_START + 27)
#define IRQ_GPIOD4						(IRQ_GPIO_CHAIN_START + 28)
#define IRQ_GPIOD5						(IRQ_GPIO_CHAIN_START + 29)
#define IRQ_GPIOD6						(IRQ_GPIO_CHAIN_START + 30)
#define IRQ_GPIOD7						(IRQ_GPIO_CHAIN_START + 31)
#define IRQ_GPIOE0						(IRQ_GPIO_CHAIN_START + 32)
#define IRQ_GPIOE1						(IRQ_GPIO_CHAIN_START + 33)
#define IRQ_GPIOE2						(IRQ_GPIO_CHAIN_START + 34)
#define IRQ_GPIOE3						(IRQ_GPIO_CHAIN_START + 35)
#define IRQ_GPIOE4						(IRQ_GPIO_CHAIN_START + 36)
#define IRQ_GPIOE5						(IRQ_GPIO_CHAIN_START + 37)
#define IRQ_GPIOE6						(IRQ_GPIO_CHAIN_START + 38)
#define IRQ_GPIOE7						(IRQ_GPIO_CHAIN_START + 39)
#define IRQ_GPIOF0						(IRQ_GPIO_CHAIN_START + 40)
#define IRQ_GPIOF1						(IRQ_GPIO_CHAIN_START + 41)
#define IRQ_GPIOF2						(IRQ_GPIO_CHAIN_START + 42)
#define IRQ_GPIOF3						(IRQ_GPIO_CHAIN_START + 43)
#define IRQ_GPIOF4						(IRQ_GPIO_CHAIN_START + 44)
#define IRQ_GPIOF5						(IRQ_GPIO_CHAIN_START + 45)
#define IRQ_GPIOF6						(IRQ_GPIO_CHAIN_START + 46)
#define IRQ_GPIOF7						(IRQ_GPIO_CHAIN_START + 47)
#define IRQ_GPIOG0						(IRQ_GPIO_CHAIN_START + 48)
#define IRQ_GPIOG1						(IRQ_GPIO_CHAIN_START + 49)
#define IRQ_GPIOG2						(IRQ_GPIO_CHAIN_START + 50)
#define IRQ_GPIOG3						(IRQ_GPIO_CHAIN_START + 51)
#define IRQ_GPIOG4						(IRQ_GPIO_CHAIN_START + 52)
#define IRQ_GPIOG5						(IRQ_GPIO_CHAIN_START + 53)
#define IRQ_GPIOG6						(IRQ_GPIO_CHAIN_START + 54)
#define IRQ_GPIOG7						(IRQ_GPIO_CHAIN_START + 55)
#define IRQ_GPIOH0						(IRQ_GPIO_CHAIN_START + 56)
#define IRQ_GPIOH1						(IRQ_GPIO_CHAIN_START + 57)
#define IRQ_GPIOH2						(IRQ_GPIO_CHAIN_START + 58)
#define IRQ_GPIOH3						(IRQ_GPIO_CHAIN_START + 59)
#define IRQ_GPIOH4						(IRQ_GPIO_CHAIN_START + 60)
#define IRQ_GPIOH5						(IRQ_GPIO_CHAIN_START + 61)
#define IRQ_GPIOH6						(IRQ_GPIO_CHAIN_START + 62)
#define IRQ_GPIOH7						(IRQ_GPIO_CHAIN_START + 63)
#define IRQ_GPIOI0						(IRQ_GPIO_CHAIN_START + 64)
#define IRQ_GPIOI1						(IRQ_GPIO_CHAIN_START + 65)
#define IRQ_GPIOI2						(IRQ_GPIO_CHAIN_START + 66)
#define IRQ_GPIOI3						(IRQ_GPIO_CHAIN_START + 67)
#define IRQ_GPIOI4						(IRQ_GPIO_CHAIN_START + 68)
#define IRQ_GPIOI5						(IRQ_GPIO_CHAIN_START + 69)
#define IRQ_GPIOI6						(IRQ_GPIO_CHAIN_START + 70)
#define IRQ_GPIOI7						(IRQ_GPIO_CHAIN_START + 71)
#define IRQ_GPIOJ0						(IRQ_GPIO_CHAIN_START + 72)
#define IRQ_GPIOJ1						(IRQ_GPIO_CHAIN_START + 73)
#define IRQ_GPIOJ2						(IRQ_GPIO_CHAIN_START + 74)
#define IRQ_GPIOJ3						(IRQ_GPIO_CHAIN_START + 75)
#define IRQ_GPIOJ4						(IRQ_GPIO_CHAIN_START + 76)
#define IRQ_GPIOJ5						(IRQ_GPIO_CHAIN_START + 77)
#define IRQ_GPIOJ6						(IRQ_GPIO_CHAIN_START + 78)
#define IRQ_GPIOJ7						(IRQ_GPIO_CHAIN_START + 79)
#define IRQ_GPIOK0						(IRQ_GPIO_CHAIN_START + 80)
#define IRQ_GPIOK1						(IRQ_GPIO_CHAIN_START + 81)
#define IRQ_GPIOK2						(IRQ_GPIO_CHAIN_START + 82)
#define IRQ_GPIOK3						(IRQ_GPIO_CHAIN_START + 83)
#define IRQ_GPIOK4						(IRQ_GPIO_CHAIN_START + 84)
#define IRQ_GPIOK5						(IRQ_GPIO_CHAIN_START + 85)
#define IRQ_GPIOK6						(IRQ_GPIO_CHAIN_START + 86)
#define IRQ_GPIOK7						(IRQ_GPIO_CHAIN_START + 87)
#define IRQ_GPIOL0						(IRQ_GPIO_CHAIN_START + 88)
#define IRQ_GPIOL1						(IRQ_GPIO_CHAIN_START + 89)
#define IRQ_GPIOL2						(IRQ_GPIO_CHAIN_START + 90)
#define IRQ_GPIOL3						(IRQ_GPIO_CHAIN_START + 91)
#define IRQ_GPIOL4						(IRQ_GPIO_CHAIN_START + 92)
#define IRQ_GPIOL5						(IRQ_GPIO_CHAIN_START + 93)
#define IRQ_GPIOL6						(IRQ_GPIO_CHAIN_START + 94)
#define IRQ_GPIOL7						(IRQ_GPIO_CHAIN_START + 95)
#define IRQ_GPIOM0						(IRQ_GPIO_CHAIN_START + 96)
#define IRQ_GPIOM1						(IRQ_GPIO_CHAIN_START + 97)
#define IRQ_GPIOM2						(IRQ_GPIO_CHAIN_START + 98)
#define IRQ_GPIOM3						(IRQ_GPIO_CHAIN_START + 99)
#define IRQ_GPIOM4						(IRQ_GPIO_CHAIN_START + 100)
#define IRQ_GPIOM5						(IRQ_GPIO_CHAIN_START + 101)
#define IRQ_GPIOM6						(IRQ_GPIO_CHAIN_START + 102)
#define IRQ_GPIOM7						(IRQ_GPIO_CHAIN_START + 103)
#define IRQ_GPION0						(IRQ_GPIO_CHAIN_START + 104)
#define IRQ_GPION1						(IRQ_GPIO_CHAIN_START + 105)
#define IRQ_GPION2						(IRQ_GPIO_CHAIN_START + 106)
#define IRQ_GPION3						(IRQ_GPIO_CHAIN_START + 107)
#define IRQ_GPION4						(IRQ_GPIO_CHAIN_START + 108)
#define IRQ_GPION5						(IRQ_GPIO_CHAIN_START + 109)
#define IRQ_GPION6						(IRQ_GPIO_CHAIN_START + 110)
#define IRQ_GPION7						(IRQ_GPIO_CHAIN_START + 111)
#define IRQ_GPIOO0						(IRQ_GPIO_CHAIN_START + 112)
#define IRQ_GPIOO1						(IRQ_GPIO_CHAIN_START + 113)
#define IRQ_GPIOO2						(IRQ_GPIO_CHAIN_START + 114)
#define IRQ_GPIOO3						(IRQ_GPIO_CHAIN_START + 115)
#define IRQ_GPIOO4						(IRQ_GPIO_CHAIN_START + 116)
#define IRQ_GPIOO5						(IRQ_GPIO_CHAIN_START + 117)
#define IRQ_GPIOO6						(IRQ_GPIO_CHAIN_START + 118)
#define IRQ_GPIOO7						(IRQ_GPIO_CHAIN_START + 119)
#define IRQ_GPIOP0						(IRQ_GPIO_CHAIN_START + 120)
#define IRQ_GPIOP1						(IRQ_GPIO_CHAIN_START + 121)
#define IRQ_GPIOP2						(IRQ_GPIO_CHAIN_START + 122)
#define IRQ_GPIOP3						(IRQ_GPIO_CHAIN_START + 123)
#define IRQ_GPIOP4						(IRQ_GPIO_CHAIN_START + 124)
#define IRQ_GPIOP5						(IRQ_GPIO_CHAIN_START + 125)
#define IRQ_GPIOP6						(IRQ_GPIO_CHAIN_START + 126)
#define IRQ_GPIOP7						(IRQ_GPIO_CHAIN_START + 127)
#define IRQ_GPIOQ0						(IRQ_GPIO_CHAIN_START + 128)
#define IRQ_GPIOQ1						(IRQ_GPIO_CHAIN_START + 129)
#define IRQ_GPIOQ2						(IRQ_GPIO_CHAIN_START + 130)
#define IRQ_GPIOQ3						(IRQ_GPIO_CHAIN_START + 131)
#define IRQ_GPIOQ4						(IRQ_GPIO_CHAIN_START + 132)
#define IRQ_GPIOQ5						(IRQ_GPIO_CHAIN_START + 133)
#define IRQ_GPIOQ6						(IRQ_GPIO_CHAIN_START + 134)
#define IRQ_GPIOQ7						(IRQ_GPIO_CHAIN_START + 135)
#define IRQ_GPIOR0						(IRQ_GPIO_CHAIN_START + 136)
#define IRQ_GPIOR1						(IRQ_GPIO_CHAIN_START + 137)
#define IRQ_GPIOR2						(IRQ_GPIO_CHAIN_START + 138)
#define IRQ_GPIOR3						(IRQ_GPIO_CHAIN_START + 139)
#define IRQ_GPIOR4						(IRQ_GPIO_CHAIN_START + 140)
#define IRQ_GPIOR5						(IRQ_GPIO_CHAIN_START + 141)
#define IRQ_GPIOR6						(IRQ_GPIO_CHAIN_START + 142)
#define IRQ_GPIOR7						(IRQ_GPIO_CHAIN_START + 143)
#define IRQ_GPIOS0						(IRQ_GPIO_CHAIN_START + 144)
#define IRQ_GPIOS1						(IRQ_GPIO_CHAIN_START + 145)
#define IRQ_GPIOS2						(IRQ_GPIO_CHAIN_START + 146)
#define IRQ_GPIOS3						(IRQ_GPIO_CHAIN_START + 147)
#define IRQ_GPIOS4						(IRQ_GPIO_CHAIN_START + 148)
#define IRQ_GPIOS5						(IRQ_GPIO_CHAIN_START + 149)
#define IRQ_GPIOS6						(IRQ_GPIO_CHAIN_START + 150)
#define IRQ_GPIOS7						(IRQ_GPIO_CHAIN_START + 151)


#define IRQ_GPIOT0						(IRQ_GPIO_CHAIN_START + 152)
#define IRQ_GPIOT1						(IRQ_GPIO_CHAIN_START + 153)
#define IRQ_GPIOT2						(IRQ_GPIO_CHAIN_START + 154)
#define IRQ_GPIOT3						(IRQ_GPIO_CHAIN_START + 155)
#define IRQ_GPIOT4						(IRQ_GPIO_CHAIN_START + 156)
#define IRQ_GPIOT5						(IRQ_GPIO_CHAIN_START + 157)
#define IRQ_GPIOT6						(IRQ_GPIO_CHAIN_START + 158)
#define IRQ_GPIOT7						(IRQ_GPIO_CHAIN_START + 159)
#define IRQ_GPIOU0						(IRQ_GPIO_CHAIN_START + 161)
#define IRQ_GPIOU1						(IRQ_GPIO_CHAIN_START + 162)
#define IRQ_GPIOU2						(IRQ_GPIO_CHAIN_START + 163)
#define IRQ_GPIOU3						(IRQ_GPIO_CHAIN_START + 164)
#define IRQ_GPIOU4						(IRQ_GPIO_CHAIN_START + 165)
#define IRQ_GPIOU5						(IRQ_GPIO_CHAIN_START + 166)
#define IRQ_GPIOU6						(IRQ_GPIO_CHAIN_START + 167)
#define IRQ_GPIOU7						(IRQ_GPIO_CHAIN_START + 168)
#define IRQ_GPIOV0						(IRQ_GPIO_CHAIN_START + 169)
#define IRQ_GPIOV1						(IRQ_GPIO_CHAIN_START + 170)
#define IRQ_GPIOV2						(IRQ_GPIO_CHAIN_START + 171)
#define IRQ_GPIOV3						(IRQ_GPIO_CHAIN_START + 172)
#define IRQ_GPIOV4						(IRQ_GPIO_CHAIN_START + 173)
#define IRQ_GPIOV5						(IRQ_GPIO_CHAIN_START + 174)
#define IRQ_GPIOV6						(IRQ_GPIO_CHAIN_START + 175)
#define IRQ_GPIOV7						(IRQ_GPIO_CHAIN_START + 176)
#define IRQ_GPIOW0						(IRQ_GPIO_CHAIN_START + 177)
#define IRQ_GPIOW1						(IRQ_GPIO_CHAIN_START + 178)
#define IRQ_GPIOW2						(IRQ_GPIO_CHAIN_START + 179)
#define IRQ_GPIOW3						(IRQ_GPIO_CHAIN_START + 181)
#define IRQ_GPIOW4						(IRQ_GPIO_CHAIN_START + 182)
#define IRQ_GPIOW5						(IRQ_GPIO_CHAIN_START + 183)
#define IRQ_GPIOW6						(IRQ_GPIO_CHAIN_START + 184)
#define IRQ_GPIOW7						(IRQ_GPIO_CHAIN_START + 185)
#define IRQ_GPIOX0						(IRQ_GPIO_CHAIN_START + 186)
#define IRQ_GPIOX1						(IRQ_GPIO_CHAIN_START + 187)
#define IRQ_GPIOX2						(IRQ_GPIO_CHAIN_START + 188)
#define IRQ_GPIOX3						(IRQ_GPIO_CHAIN_START + 189)
#define IRQ_GPIOX4						(IRQ_GPIO_CHAIN_START + 190)
#define IRQ_GPIOX5						(IRQ_GPIO_CHAIN_START + 191)
#define IRQ_GPIOX6						(IRQ_GPIO_CHAIN_START + 192)
#define IRQ_GPIOX7						(IRQ_GPIO_CHAIN_START + 193)
#define IRQ_GPIOY0						(IRQ_GPIO_CHAIN_START + 194)
#define IRQ_GPIOY1						(IRQ_GPIO_CHAIN_START + 195)
#define IRQ_GPIOY2						(IRQ_GPIO_CHAIN_START + 196)
#define IRQ_GPIOY3						(IRQ_GPIO_CHAIN_START + 197)
#define IRQ_GPIOY4						(IRQ_GPIO_CHAIN_START + 198)
#define IRQ_GPIOY5						(IRQ_GPIO_CHAIN_START + 199)
#define IRQ_GPIOY6						(IRQ_GPIO_CHAIN_START + 200)
#define IRQ_GPIOY7						(IRQ_GPIO_CHAIN_START + 201)
#define IRQ_GPIOZ0						(IRQ_GPIO_CHAIN_START + 202)
#define IRQ_GPIOZ1						(IRQ_GPIO_CHAIN_START + 203)
#define IRQ_GPIOZ2						(IRQ_GPIO_CHAIN_START + 204)
#define IRQ_GPIOZ3						(IRQ_GPIO_CHAIN_START + 205)
#define IRQ_GPIOZ4						(IRQ_GPIO_CHAIN_START + 206)
#define IRQ_GPIOZ5						(IRQ_GPIO_CHAIN_START + 207)
#define IRQ_GPIOZ6						(IRQ_GPIO_CHAIN_START + 208)
#define IRQ_GPIOZ7						(IRQ_GPIO_CHAIN_START + 209)
#define IRQ_GPIOAA0						(IRQ_GPIO_CHAIN_START + 210)
#define IRQ_GPIOAA1						(IRQ_GPIO_CHAIN_START + 211)
#define IRQ_GPIOAA2						(IRQ_GPIO_CHAIN_START + 212)
#define IRQ_GPIOAA3						(IRQ_GPIO_CHAIN_START + 213)
#define IRQ_GPIOAA4						(IRQ_GPIO_CHAIN_START + 214)
#define IRQ_GPIOAA5						(IRQ_GPIO_CHAIN_START + 215)
#define IRQ_GPIOAA6						(IRQ_GPIO_CHAIN_START + 216)
#define IRQ_GPIOAA7						(IRQ_GPIO_CHAIN_START + 217)
#define IRQ_GPIOAB0						(IRQ_GPIO_CHAIN_START + 218)
#define IRQ_GPIOAB1						(IRQ_GPIO_CHAIN_START + 219)
#define IRQ_GPIOAB2						(IRQ_GPIO_CHAIN_START + 220)
#define IRQ_GPIOAB3						(IRQ_GPIO_CHAIN_START + 221)
#define IRQ_GPIOAB4						(IRQ_GPIO_CHAIN_START + 222)
#define IRQ_GPIOAB5						(IRQ_GPIO_CHAIN_START + 223)
#define IRQ_GPIOAB6						(IRQ_GPIO_CHAIN_START + 224)
#define IRQ_GPIOAB7						(IRQ_GPIO_CHAIN_START + 225)
#define IRQ_GPIOAC0						(IRQ_GPIO_CHAIN_START + 226)
#define IRQ_GPIOAC1						(IRQ_GPIO_CHAIN_START + 227)
#define IRQ_GPIOAC2						(IRQ_GPIO_CHAIN_START + 228)
#define IRQ_GPIOAC3						(IRQ_GPIO_CHAIN_START + 229)
#define IRQ_GPIOAC4						(IRQ_GPIO_CHAIN_START + 230)
#define IRQ_GPIOAC5						(IRQ_GPIO_CHAIN_START + 231)
#define IRQ_GPIOAC6						(IRQ_GPIO_CHAIN_START + 232)
#define IRQ_GPIOAC7						(IRQ_GPIO_CHAIN_START + 233)

#ifdef CONFIG_SGPIO_AST
#define SGPIO_CHAIN_CHIP_BASE			(GPIO_PORT_NUM * 8)

#define SGPIO_PORT_NUM           			10

#define IRQ_SGPIOA0						(IRQ_SGPIO_CHAIN_START + 0)
#define IRQ_SGPIOA1						(IRQ_SGPIO_CHAIN_START + 1)
#define IRQ_SGPIOA2						(IRQ_SGPIO_CHAIN_START + 2)
#define IRQ_SGPIOA3						(IRQ_SGPIO_CHAIN_START + 3)
#define IRQ_SGPIOA4						(IRQ_SGPIO_CHAIN_START + 4)
#define IRQ_SGPIOA5						(IRQ_SGPIO_CHAIN_START + 5)
#define IRQ_SGPIOA6						(IRQ_SGPIO_CHAIN_START + 6)
#define IRQ_SGPIOA7						(IRQ_SGPIO_CHAIN_START + 7)
#define IRQ_SGPIOB0						(IRQ_SGPIO_CHAIN_START + 8)
#define IRQ_SGPIOB1						(IRQ_SGPIO_CHAIN_START + 9)
#define IRQ_SGPIOB2						(IRQ_SGPIO_CHAIN_START + 10)
#define IRQ_SGPIOB3						(IRQ_SGPIO_CHAIN_START + 11)
#define IRQ_SGPIOB4						(IRQ_SGPIO_CHAIN_START + 12)
#define IRQ_SGPIOB5						(IRQ_SGPIO_CHAIN_START + 13)
#define IRQ_SGPIOB6						(IRQ_SGPIO_CHAIN_START + 14)
#define IRQ_SGPIOB7						(IRQ_SGPIO_CHAIN_START + 15)
#define IRQ_SGPIOC0						(IRQ_SGPIO_CHAIN_START + 16)
#define IRQ_SGPIOC1						(IRQ_SGPIO_CHAIN_START + 17)
#define IRQ_SGPIOC2						(IRQ_SGPIO_CHAIN_START + 18)
#define IRQ_SGPIOC3						(IRQ_SGPIO_CHAIN_START + 19)
#define IRQ_SGPIOC4						(IRQ_SGPIO_CHAIN_START + 20)
#define IRQ_SGPIOC5						(IRQ_SGPIO_CHAIN_START + 21)
#define IRQ_SGPIOC6						(IRQ_SGPIO_CHAIN_START + 22)
#define IRQ_SGPIOC7						(IRQ_SGPIO_CHAIN_START + 23)
#define IRQ_SGPIOD0						(IRQ_SGPIO_CHAIN_START + 24)
#define IRQ_SGPIOD1						(IRQ_SGPIO_CHAIN_START + 25)
#define IRQ_SGPIOD2						(IRQ_SGPIO_CHAIN_START + 26)
#define IRQ_SGPIOD3						(IRQ_SGPIO_CHAIN_START + 27)
#define IRQ_SGPIOD4						(IRQ_SGPIO_CHAIN_START + 28)
#define IRQ_SGPIOD5						(IRQ_SGPIO_CHAIN_START + 29)
#define IRQ_SGPIOD6						(IRQ_SGPIO_CHAIN_START + 30)
#define IRQ_SGPIOD7						(IRQ_SGPIO_CHAIN_START + 31)
#define IRQ_SGPIOE0						(IRQ_SGPIO_CHAIN_START + 32)
#define IRQ_SGPIOE1						(IRQ_SGPIO_CHAIN_START + 33)
#define IRQ_SGPIOE2						(IRQ_SGPIO_CHAIN_START + 34)
#define IRQ_SGPIOE3						(IRQ_SGPIO_CHAIN_START + 35)
#define IRQ_SGPIOE4						(IRQ_SGPIO_CHAIN_START + 36)
#define IRQ_SGPIOE5						(IRQ_SGPIO_CHAIN_START + 37)
#define IRQ_SGPIOE6						(IRQ_SGPIO_CHAIN_START + 38)
#define IRQ_SGPIOE7						(IRQ_SGPIO_CHAIN_START + 39)
#define IRQ_SGPIOF0						(IRQ_SGPIO_CHAIN_START + 40)
#define IRQ_SGPIOF1						(IRQ_SGPIO_CHAIN_START + 41)
#define IRQ_SGPIOF2						(IRQ_SGPIO_CHAIN_START + 42)
#define IRQ_SGPIOF3						(IRQ_SGPIO_CHAIN_START + 43)
#define IRQ_SGPIOF4						(IRQ_SGPIO_CHAIN_START + 44)
#define IRQ_SGPIOF5						(IRQ_SGPIO_CHAIN_START + 45)
#define IRQ_SGPIOF6						(IRQ_SGPIO_CHAIN_START + 46)
#define IRQ_SGPIOF7						(IRQ_SGPIO_CHAIN_START + 47)
#define IRQ_SGPIOG0						(IRQ_SGPIO_CHAIN_START + 48)
#define IRQ_SGPIOG1						(IRQ_SGPIO_CHAIN_START + 49)
#define IRQ_SGPIOG2						(IRQ_SGPIO_CHAIN_START + 50)
#define IRQ_SGPIOG3						(IRQ_SGPIO_CHAIN_START + 51)
#define IRQ_SGPIOG4						(IRQ_SGPIO_CHAIN_START + 52)
#define IRQ_SGPIOG5						(IRQ_SGPIO_CHAIN_START + 53)
#define IRQ_SGPIOG6						(IRQ_SGPIO_CHAIN_START + 54)
#define IRQ_SGPIOG7						(IRQ_SGPIO_CHAIN_START + 55)
#define IRQ_SGPIOH0						(IRQ_SGPIO_CHAIN_START + 56)
#define IRQ_SGPIOH1						(IRQ_SGPIO_CHAIN_START + 57)
#define IRQ_SGPIOH2						(IRQ_SGPIO_CHAIN_START + 58)
#define IRQ_SGPIOH3						(IRQ_SGPIO_CHAIN_START + 59)
#define IRQ_SGPIOH4						(IRQ_SGPIO_CHAIN_START + 60)
#define IRQ_SGPIOH5						(IRQ_SGPIO_CHAIN_START + 61)
#define IRQ_SGPIOH6						(IRQ_SGPIO_CHAIN_START + 62)
#define IRQ_SGPIOH7						(IRQ_SGPIO_CHAIN_START + 63)
#define IRQ_SGPIOI0						(IRQ_SGPIO_CHAIN_START + 64)
#define IRQ_SGPIOI1						(IRQ_SGPIO_CHAIN_START + 65)
#define IRQ_SGPIOI2						(IRQ_SGPIO_CHAIN_START + 66)
#define IRQ_SGPIOI3						(IRQ_SGPIO_CHAIN_START + 67)
#define IRQ_SGPIOI4						(IRQ_SGPIO_CHAIN_START + 68)
#define IRQ_SGPIOI5						(IRQ_SGPIO_CHAIN_START + 69)
#define IRQ_SGPIOI6						(IRQ_SGPIO_CHAIN_START + 70)
#define IRQ_SGPIOI7						(IRQ_SGPIO_CHAIN_START + 71)
#define IRQ_SGPIOJ0						(IRQ_SGPIO_CHAIN_START + 72)
#define IRQ_SGPIOJ1						(IRQ_SGPIO_CHAIN_START + 73)
#define IRQ_SGPIOJ2						(IRQ_SGPIO_CHAIN_START + 74)
#define IRQ_SGPIOJ3						(IRQ_SGPIO_CHAIN_START + 75)
#define IRQ_SGPIOJ4						(IRQ_SGPIO_CHAIN_START + 76)
#define IRQ_SGPIOJ5						(IRQ_SGPIO_CHAIN_START + 77)
#define IRQ_SGPIOJ6						(IRQ_SGPIO_CHAIN_START + 78)
#define IRQ_SGPIOJ7						(IRQ_SGPIO_CHAIN_START + 79)
#endif

#endif
