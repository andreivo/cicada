/**
 * CICADA DCP Firmware for the ESP32
 *
 *    VERSION: 0.0.1-alpha
 *    DATE   : 2021-01
 *    AUTHORS: André Ivo <andre.ivo@gmail.com.br>
 *    LICENSE: CC-BY-4.0
 *       SITE: https://github.com/andreivo/CicadaProject
 */

//LEDs
#define PIN_LED_RED 25
#define PIN_LED_GREEN 33
#define PIN_LED_BLUE 32

//Button start Cicada Wizard Portal in mode AP
#define PIN_AP_WIZARD 26

//DHT SENSOR
#define PIN_DHT 27
//RAIN GAUGE SENSOR
#define PIN_RG 4
//VOLTAGE
#define PIN_ADC_VCC_EN 14
#define PIN_ADC_VCC_IN 34
#define PIN_ADC_VCC_BA 35

//Modem SIM800
#define PIN_MODEM_TURNON 23
//#define PIN_MODEM_RX 16
//#define PIN_MODEM_TX 17
#define PIN_MODEM_RX 17
#define PIN_MODEM_TX 16

//SDCard
#define PIN_SDCARD_CHIP_SELECT 21 // Pino serial - sdsc
#define PIN_SDCARD_MOSI 19 // Pino serial - mosi
#define PIN_SDCARD_MISO 18 // Pino serial - miso
#define PIN_SDCARD_SCK 22 // Clock pin - sck
