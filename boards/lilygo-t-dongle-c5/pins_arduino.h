#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include "soc/soc_caps.h"
#include <stdint.h>

// BUILTIN_LED can be used in new Arduino API digitalWrite() like in Blink.ino
static const uint8_t LED_BUILTIN = SOC_GPIO_PIN_COUNT + 2;
#define BUILTIN_LED LED_BUILTIN // backward compatibility
#define LED_BUILTIN LED_BUILTIN // allow testing #ifdef LED_BUILTIN
// RGB_BUILTIN and RGB_BRIGHTNESS can be used in new Arduino API rgbLedWrite()
#define RGB_BUILTIN LED_BUILTIN
#define RGB_BRIGHTNESS 64

static const uint8_t TX = 11;
static const uint8_t RX = 12;

static const uint8_t USB_DM = 13;
static const uint8_t USB_DP = 14;

static const uint8_t SDA = 4;
static const uint8_t SCL = 5;

static const uint8_t SS = 10;
static const uint8_t MOSI = 2;
static const uint8_t MISO = 7;
static const uint8_t SCK = 6;

static const uint8_t A0 = 1;
static const uint8_t A1 = 2;
static const uint8_t A2 = 3;
static const uint8_t A3 = 4;
static const uint8_t A4 = 5;
static const uint8_t A5 = 6;

// LP I2C Pins are fixed on ESP32-C5
static const uint8_t LP_SDA = 4;
static const uint8_t LP_SCL = 5;
#define WIRE1_PIN_DEFINED
#define SDA1 LP_SDA
#define SCL1 LP_SCL

// LP UART Pins are fixed on ESP32-C5
static const uint8_t LP_RX = 12;
static const uint8_t LP_TX = 11;

/* Communication Buses*/
// UART
#define SERIAL_TX 11
#define SERIAL_RX 12
// I2C
#define GROVE_SDA 4
#define GROVE_SCL 5
// SPI
#define SPI_SCK_PIN 6
#define SPI_MOSI_PIN 2
#define SPI_MISO_PIN 7
#define SPI_SS_PIN 9

/* TFT definitions */
#define HAS_SCREEN 1
#define ROTATION 1
#define MINBRIGHT (uint8_t)1
#define USER_SETUP_LOADED 1
/* ---------------------   */
// Setup for ST7789 170x320

// #define ST7789_DRIVER 1
// #define TFT_RGB_ORDER 0
// #define TFT_WIDTH 170
// #define TFT_HEIGHT 320

/* ---------------------   */
// Setup for ST7789 240x320

// #define ST7789_DRIVER=1
// #define TFT_WIDTH=240
// #define TFT_HEIGHT=320
// // #define TFT_INVERSION_ON
// #define TFT_RGB_ORDER=TFT_BGR

/* ---------------------   */
// Setup for ST7735 80x160
#define ST7735_DRIVER 1
#define TFT_HEIGHT 160
#define TFT_WIDTH 80
#define TFT_RGB_ORDER TFT_BGR

/* ---------------------   */
// Common TFT definitions
#define TFT_BACKLIGHT_ON 1
#define TFT_BL 0
#define TFT_RST 1
#define TFT_DC 3
#define TFT_MISO 7 // shared SPI bus
#define TFT_MOSI 2
#define TFT_SCLK 6
#define TFT_CS 10
#define TOUCH_CS -1
#define SMOOTH_FONT 1
#define SPI_FREQUENCY 27000000
#define SPI_READ_FREQUENCY 27000000
#define SPI_TOUCH_FREQUENCY 2500000

/*  Peripheral settings  */
// Bad USB with CH9329
#define BAD_RX 12
#define BAD_TX 11
// GPS Bus
#define GPS_SERIAL_TX 11
#define GPS_SERIAL_RX 12

// Buttons
// The T-Dongle-C5 has a single exposed boot button on IO28.
// IO0 and IO1 are used by the TFT backlight/reset, so they must not be
// mapped as navigation buttons or the panel will flicker/reset.
#define SEL_BTN 28
#define BTN_ACT LOW
#define DEEPSLEEP_WAKEUP_PIN SEL_BTN

// InfraRed
#define RXLED 7
#define TXLED 3
#define LED_ON HIGH
#define LED_OFF LOW
// SDCard
#define SDCARD_CS 23
#define SDCARD_SCK SPI_SCK_PIN
#define SDCARD_MISO SPI_MISO_PIN
#define SDCARD_MOSI SPI_MOSI_PIN
// CC1101
#define CC1101_GDO0_PIN 8
#define CC1101_SS_PIN 9
#define CC1101_MOSI_PIN SPI_MOSI_PIN
#define CC1101_SCK_PIN SPI_SCK_PIN
#define CC1101_MISO_PIN SPI_MISO_PIN
// NRF24
#define NRF24_CE_PIN 8
#define NRF24_SS_PIN 9
#define NRF24_MOSI_PIN SPI_MOSI_PIN
#define NRF24_SCK_PIN SPI_SCK_PIN
#define NRF24_MISO_PIN SPI_MISO_PIN
// Ethernet
#define W5500_INT_PIN 8
#define W5500_SS_PIN 9
#define W5500_MOSI_PIN SPI_MOSI_PIN
#define W5500_SCK_PIN SPI_SCK_PIN
#define W5500_MISO_PIN SPI_MISO_PIN
#endif /* Pins_Arduino_h */
