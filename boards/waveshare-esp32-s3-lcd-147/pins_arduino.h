#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

#ifndef DEVICE_NAME
#define DEVICE_NAME "Waveshare ESP32-S3-LCD-1.47"
#endif

#define USB_VID 0x303A
#define USB_PID 0x1001

// Exposed UART on the board header
static const uint8_t TX = 43;
static const uint8_t RX = 44;

// Exposed GPIOs on the header
static const uint8_t G0 = 0;
static const uint8_t G1 = 1;
static const uint8_t G2 = 2;
static const uint8_t G3 = 3;
static const uint8_t G4 = 4;
static const uint8_t G5 = 5;
static const uint8_t G6 = 6;
static const uint8_t G7 = 7;
static const uint8_t G8 = 8;
static const uint8_t G9 = 9;
static const uint8_t G10 = 10;
static const uint8_t G11 = 11;
static const uint8_t G12 = 12;
static const uint8_t G13 = 13;
static const uint8_t G43 = 43;
static const uint8_t G44 = 44;

// Shared/exposed GPIO defaults for external modules
#define GROVE_SDA 1
#define GROVE_SCL 2
static const uint8_t SDA = GROVE_SDA;
static const uint8_t SCL = GROVE_SCL;

#define SERIAL_TX 43
#define SERIAL_RX 44
#define GPS_SERIAL_TX SERIAL_TX
#define GPS_SERIAL_RX SERIAL_RX

#define IR_TX_PINS {{"Pin 1", 1}, {"Pin 2", 2}, {"Pin 3", 3}, {"Pin 4", 4}, {"Pin 5", 5}, {"Pin 6", 6}, {"Pin 7", 7}, {"Pin 8", 8}, {"Pin 9", 9}, {"Pin 10", 10}, {"Pin 11", 11}, {"Pin 12", 12}, {"Pin 13", 13}}
#define IR_RX_PINS {{"Pin 1", 1}, {"Pin 2", 2}, {"Pin 3", 3}, {"Pin 4", 4}, {"Pin 5", 5}, {"Pin 6", 6}, {"Pin 7", 7}, {"Pin 8", 8}, {"Pin 9", 9}, {"Pin 10", 10}, {"Pin 11", 11}, {"Pin 12", 12}, {"Pin 13", 13}}
#define RF_TX_PINS {{"Pin 1", 1}, {"Pin 2", 2}, {"Pin 3", 3}, {"Pin 4", 4}, {"Pin 5", 5}, {"Pin 6", 6}, {"Pin 7", 7}, {"Pin 8", 8}, {"Pin 9", 9}, {"Pin 10", 10}, {"Pin 11", 11}, {"Pin 12", 12}, {"Pin 13", 13}}
#define RF_RX_PINS {{"Pin 1", 1}, {"Pin 2", 2}, {"Pin 3", 3}, {"Pin 4", 4}, {"Pin 5", 5}, {"Pin 6", 6}, {"Pin 7", 7}, {"Pin 8", 8}, {"Pin 9", 9}, {"Pin 10", 10}, {"Pin 11", 11}, {"Pin 12", 12}, {"Pin 13", 13}}

// Main SPI bus for external modules uses exposed pins
#define SPI_SS_PIN 10
#define SPI_MOSI_PIN 11
#define SPI_MISO_PIN 12
#define SPI_SCK_PIN 13

static const uint8_t SS = SPI_SS_PIN;
static const uint8_t MOSI = SPI_MOSI_PIN;
static const uint8_t MISO = SPI_MISO_PIN;
static const uint8_t SCK = SPI_SCK_PIN;

#define CC1101_GDO0_PIN 9
#define CC1101_SS_PIN 10
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN

#define NRF24_CE_PIN 7
#define NRF24_SS_PIN 8
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN

#define W5500_SS_PIN -1
#define W5500_MOSI_PIN SPI_MOSI_PIN
#define W5500_SCK_PIN SPI_SCK_PIN
#define W5500_MISO_PIN SPI_MISO_PIN
#define W5500_INT_PIN -1

// Built-in SD card uses SD_MMC
#define SDCARD_CS -1
#define SDCARD_SCK 14
#define SDCARD_MISO 16
#define SDCARD_MOSI 15

// TFT
#define USER_SETUP_LOADED
#define ST7789_DRIVER 1
#define TFT_RGB_ORDER TFT_BGR
#define INIT_SEQUENCE_3
#define TFT_INVERSION_ON
#define CGRAM_OFFSET
#define TFT_WIDTH 172
#define TFT_HEIGHT 320
#define TFT_BACKLIGHT_ON HIGH
#define TFT_MOSI 45
#define TFT_SCLK 40
#define TFT_CS 42
#define TFT_DC 41
#define TFT_RST 39
#define TFT_BL 48
#define SPI_FREQUENCY 40000000
#define SPI_READ_FREQUENCY 20000000
#define SMOOTH_FONT 1

// Display setup
#define HAS_SCREEN
#define ROTATION 1
#define MINBRIGHT (uint8_t)1

// Font sizes
#define FP 1
#define FM 2
#define FG 3

// RGB LED
#define RGB_LED 38

// Mic not populated on this board
#define PIN_CLK -1
#define PIN_DATA -1

// Single exposed button
#define HAS_1_BUTTON 1
#define BTN_ALIAS "\"OK\""
#define SEL_BTN 0
#define BTN_ACT LOW

// Infrared defaults
#define TXLED 3
#define RXLED 4
#define LED_ON HIGH
#define LED_OFF LOW

// BadUSB
#define USB_as_HID 1

#endif /* Pins_Arduino_h */
