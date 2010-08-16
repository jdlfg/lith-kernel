/*
* Copyright (C) 2008 by Sascha Hauer <kernel@pengutronix.de>
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
* MA 02110-1301, USA.
*/

#ifndef _MXC_IOMUX_MX1_H
#define _MXC_IOMUX_MX1_H

#ifndef GPIO_PORTA
#error Please include mach/iomux.h
#endif

/* FIXME: This list is not completed. The correct directions are
* missing on some (many) pins
*/


/* Primary GPIO pin functions */

#define PA0_AIN_SPI2_CLK        (GPIO_PORTA | GPIO_AIN | GPIO_OUT | 0)
#define PA0_AF_ETMTRACESYNC     (GPIO_PORTA | GPIO_AF | 0)
#define PA1_AOUT_SPI2_RXD       (GPIO_PORTA | GPIO_AOUT | GPIO_IN | 1)
#define PA1_PF_TIN              (GPIO_PORTA | GPIO_PF | 1)
#define PA2_PF_PWM0             (GPIO_PORTA | GPIO_PF | GPIO_OUT | 2)
#define PA3_PF_CSI_MCLK         (GPIO_PORTA | GPIO_PF | 3)
#define PA4_PF_CSI_D0           (GPIO_PORTA | GPIO_PF | 4)
#define PA5_PF_CSI_D1           (GPIO_PORTA | GPIO_PF | 5)
#define PA6_PF_CSI_D2           (GPIO_PORTA | GPIO_PF | 6)
#define PA7_PF_CSI_D3           (GPIO_PORTA | GPIO_PF | 7)
#define PA8_PF_CSI_D4           (GPIO_PORTA | GPIO_PF | 8)
#define PA9_PF_CSI_D5           (GPIO_PORTA | GPIO_PF | 9)
#define PA10_PF_CSI_D6          (GPIO_PORTA | GPIO_PF | 10)
#define PA11_PF_CSI_D7          (GPIO_PORTA | GPIO_PF | 11)
#define PA12_PF_CSI_VSYNC       (GPIO_PORTA | GPIO_PF | 12)
#define PA13_PF_CSI_HSYNC       (GPIO_PORTA | GPIO_PF | 13)
#define PA14_PF_CSI_PIXCLK      (GPIO_PORTA | GPIO_PF | 14)
#define PA15_PF_I2C_SDA         (GPIO_PORTA | GPIO_PF | GPIO_OUT | 15)
#define PA16_PF_I2C_SCL         (GPIO_PORTA | GPIO_PF | GPIO_OUT | 16)
#define PA17_AF_ETMTRACEPKT4    (GPIO_PORTA | GPIO_AF | 17)
#define PA17_AIN_SPI2_SS        (GPIO_PORTA | GPIO_AIN | GPIO_OUT | 17)
#define PA18_AF_ETMTRACEPKT5    (GPIO_PORTA | GPIO_AF | 18)
#define PA19_AF_ETMTRACEPKT6    (GPIO_PORTA | GPIO_AF | 19)
#define PA20_AF_ETMTRACEPKT7    (GPIO_PORTA | GPIO_AF | 20)
#define PA21_PF_A0              (GPIO_PORTA | GPIO_PF | 21)
#define PA22_PF_CS4             (GPIO_PORTA | GPIO_PF | 22)
#define PA23_PF_CS5             (GPIO_PORTA | GPIO_PF | 23)
#define PA24_PF_A16             (GPIO_PORTA | GPIO_PF | 24)
#define PA24_AF_ETMTRACEPKT0    (GPIO_PORTA | GPIO_AF | 24)
#define PA25_PF_A17             (GPIO_PORTA | GPIO_PF | 25)
#define PA25_AF_ETMTRACEPKT1    (GPIO_PORTA | GPIO_AF | 25)
#define PA26_PF_A18             (GPIO_PORTA | GPIO_PF | 26)
#define PA26_AF_ETMTRACEPKT2    (GPIO_PORTA | GPIO_AF | 26)
#define PA27_PF_A19             (GPIO_PORTA | GPIO_PF | 27)
#define PA27_AF_ETMTRACEPKT3    (GPIO_PORTA | GPIO_AF | 27)
#define PA28_PF_A20             (GPIO_PORTA | GPIO_PF | 28)
#define PA28_AF_ETMPIPESTAT0    (GPIO_PORTA | GPIO_AF | 28)
#define PA29_PF_A21             (GPIO_PORTA | GPIO_PF | 29)
#define PA29_AF_ETMPIPESTAT1    (GPIO_PORTA | GPIO_AF | 29)
#define PA30_PF_A22             (GPIO_PORTA | GPIO_PF | 30)
#define PA30_AF_ETMPIPESTAT2    (GPIO_PORTA | GPIO_AF | 30)
#define PA31_PF_A23             (GPIO_PORTA | GPIO_PF | 31)
#define PA31_AF_ETMTRACECLK     (GPIO_PORTA | GPIO_AF | 31)
#define PB8_PF_SD_DAT0          (GPIO_PORTB | GPIO_PF | GPIO_PUEN | 8)
#define PB8_AF_MS_PIO           (GPIO_PORTB | GPIO_AF | 8)
#define PB9_PF_SD_DAT1          (GPIO_PORTB | GPIO_PF | GPIO_PUEN | 9)
#define PB9_AF_MS_PI1           (GPIO_PORTB | GPIO_AF | 9)
#define PB10_PF_SD_DAT2         (GPIO_PORTB | GPIO_PF | GPIO_PUEN | 10)
#define PB10_AF_MS_SCLKI        (GPIO_PORTB | GPIO_AF | 10)
#define PB11_PF_SD_DAT3         (GPIO_PORTB | GPIO_PF | 11)
#define PB11_AF_MS_SDIO         (GPIO_PORTB | GPIO_AF | 11)
#define PB12_PF_SD_CLK          (GPIO_PORTB | GPIO_PF | 12)
#define PB12_AF_MS_SCLK0        (GPIO_PORTB | GPIO_AF | 12)
#define PB13_PF_SD_CMD          (GPIO_PORTB | GPIO_PF | GPIO_PUEN | 13)
#define PB13_AF_MS_BS           (GPIO_PORTB | GPIO_AF | 13)
#define PB14_AF_SSI_RXFS        (GPIO_PORTB | GPIO_AF | 14)
#define PB15_AF_SSI_RXCLK       (GPIO_PORTB | GPIO_AF | 15)
#define PB16_AF_SSI_RXDAT       (GPIO_PORTB | GPIO_AF | GPIO_IN | 16)
#define PB17_AF_SSI_TXDAT       (GPIO_PORTB | GPIO_AF | GPIO_OUT | 17)
#define PB18_AF_SSI_TXFS        (GPIO_PORTB | GPIO_AF | 18)
#define PB19_AF_SSI_TXCLK       (GPIO_PORTB | GPIO_AF | 19)
#define PB20_PF_USBD_AFE        (GPIO_PORTB | GPIO_PF | 20)
#define PB21_PF_USBD_OE         (GPIO_PORTB | GPIO_PF | 21)
#define PB22_PF_USBD_RCV        (GPIO_PORTB | GPIO_PF | 22)
#define PB23_PF_USBD_SUSPND     (GPIO_PORTB | GPIO_PF | 23)
#define PB24_PF_USBD_VP         (GPIO_PORTB | GPIO_PF | 24)
#define PB25_PF_USBD_VM         (GPIO_PORTB | GPIO_PF | 25)
#define PB26_PF_USBD_VPO        (GPIO_PORTB | GPIO_PF | 26)
#define PB27_PF_USBD_VMO        (GPIO_PORTB | GPIO_PF | 27)
#define PB28_PF_UART2_CTS       (GPIO_PORTB | GPIO_PF | GPIO_OUT | 28)
#define PB29_PF_UART2_RTS       (GPIO_PORTB | GPIO_PF | GPIO_IN | 29)
#define PB30_PF_UART2_TXD       (GPIO_PORTB | GPIO_PF | GPIO_OUT | 30)
#define PB31_PF_UART2_RXD       (GPIO_PORTB | GPIO_PF | GPIO_IN | 31)
#define PC3_PF_SSI_RXFS         (GPIO_PORTC | GPIO_PF | 3)
#define PC4_PF_SSI_RXCLK        (GPIO_PORTC | GPIO_PF | 4)
#define PC5_PF_SSI_RXDAT        (GPIO_PORTC | GPIO_PF | GPIO_IN | 5)
#define PC6_PF_SSI_TXDAT        (GPIO_PORTC | GPIO_PF | GPIO_OUT | 6)
#define PC7_PF_SSI_TXFS         (GPIO_PORTC | GPIO_PF | 7)
#define PC8_PF_SSI_TXCLK        (GPIO_PORTC | GPIO_PF | 8)
#define PC9_PF_UART1_CTS        (GPIO_PORTC | GPIO_PF | GPIO_OUT | 9)
#define PC10_PF_UART1_RTS       (GPIO_PORTC | GPIO_PF | GPIO_IN | 10)
#define PC11_PF_UART1_TXD       (GPIO_PORTC | GPIO_PF | GPIO_OUT | 11)
#define PC12_PF_UART1_RXD       (GPIO_PORTC | GPIO_PF | GPIO_IN | 12)
#define PC13_PF_SPI1_SPI_RDY    (GPIO_PORTC | GPIO_PF | 13)
#define PC14_PF_SPI1_SCLK       (GPIO_PORTC | GPIO_PF | 14)
#define PC15_PF_SPI1_SS         (GPIO_PORTC | GPIO_PF | 15)
#define PC16_PF_SPI1_MISO       (GPIO_PORTC | GPIO_PF | 16)
#define PC17_PF_SPI1_MOSI       (GPIO_PORTC | GPIO_PF | 17)
#define PC24_BIN_UART3_RI       (GPIO_PORTC | GPIO_BIN | GPIO_OUT | 24)
#define PC25_BIN_UART3_DSR      (GPIO_PORTC | GPIO_BIN | GPIO_OUT | 25)
#define PC26_AOUT_UART3_DTR     (GPIO_PORTC | GPIO_AOUT | GPIO_IN | 26)
#define PC27_BIN_UART3_DCD      (GPIO_PORTC | GPIO_BIN | GPIO_OUT | 27)
#define PC28_BIN_UART3_CTS      (GPIO_PORTC | GPIO_BIN | GPIO_OUT | 28)
#define PC29_AOUT_UART3_RTS     (GPIO_PORTC | GPIO_AOUT | GPIO_IN | 29)
#define PC30_BIN_UART3_TX       (GPIO_PORTC | GPIO_BIN | 30)
#define PC31_AOUT_UART3_RX      (GPIO_PORTC | GPIO_AOUT | GPIO_IN | 31)
#define PD6_PF_LSCLK            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 6)
#define PD7_PF_REV              (GPIO_PORTD | GPIO_PF | 7)
#define PD7_AF_UART2_DTR        (GPIO_PORTD | GPIO_AF | GPIO_IN | 7)
#define PD7_AIN_SPI2_SCLK       (GPIO_PORTD | GPIO_AIN | 7)
#define PD8_PF_CLS              (GPIO_PORTD | GPIO_PF | 8)
#define PD8_AF_UART2_DCD        (GPIO_PORTD | GPIO_AF | GPIO_OUT | 8)
#define PD8_AIN_SPI2_SS         (GPIO_PORTD | GPIO_AIN | 8)
#define PD9_PF_PS               (GPIO_PORTD | GPIO_PF | 9)
#define PD9_AF_UART2_RI         (GPIO_PORTD | GPIO_AF | GPIO_OUT | 9)
#define PD9_AOUT_SPI2_RXD       (GPIO_PORTD | GPIO_AOUT | GPIO_IN | 9)
#define PD10_PF_SPL_SPR         (GPIO_PORTD | GPIO_PF | GPIO_OUT | 10)
#define PD10_AF_UART2_DSR       (GPIO_PORTD | GPIO_AF | GPIO_OUT | 10)
#define PD10_AIN_SPI2_TXD       (GPIO_PORTD | GPIO_AIN | GPIO_OUT | 10)
#define PD11_PF_CONTRAST        (GPIO_PORTD | GPIO_PF | GPIO_OUT | 11)
#define PD12_PF_ACD_OE          (GPIO_PORTD | GPIO_PF | GPIO_OUT | 12)
#define PD13_PF_LP_HSYNC        (GPIO_PORTD | GPIO_PF | GPIO_OUT | 13)
#define PD14_PF_FLM_VSYNC       (GPIO_PORTD | GPIO_PF | GPIO_OUT | 14)
#define PD15_PF_LD0             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 15)
#define PD16_PF_LD1             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 16)
#define PD17_PF_LD2             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 17)
#define PD18_PF_LD3             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 18)
#define PD19_PF_LD4             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 19)
#define PD20_PF_LD5             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 20)
#define PD21_PF_LD6             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 21)
#define PD22_PF_LD7             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 22)
#define PD23_PF_LD8             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 23)
#define PD24_PF_LD9             (GPIO_PORTD | GPIO_PF | GPIO_OUT | 24)
#define PD25_PF_LD10            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 25)
#define PD26_PF_LD11            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 26)
#define PD27_PF_LD12            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 27)
#define PD28_PF_LD13            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 28)
#define PD29_PF_LD14            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 29)
#define PD30_PF_LD15            (GPIO_PORTD | GPIO_PF | GPIO_OUT | 30)
#define PD31_PF_TMR2OUT         (GPIO_PORTD | GPIO_PF | 31)
#define PD31_BIN_SPI2_TXD       (GPIO_PORTD | GPIO_BIN | 31)


#endif
