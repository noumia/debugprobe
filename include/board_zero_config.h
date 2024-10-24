#ifndef BOARD_ZERO_H_
#define BOARD_ZERO_H_

#ifdef ZERO_PINOUT

#define PROBE_IO_RAW
#define PROBE_CDC_UART

#if defined(ZERO_NOUART)
#undef PROBE_CDC_UART
#endif

/* ZERO

5V
GND
3V3
29 : SWCLK
28 : SWIO
27 : nRESET
26

0 : TX
1 : RX

*/

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 28
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 1) // 29
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 0) // 28

// Target reset config
#define PROBE_PIN_RESET 27

#if defined(PROBE_CDC_UART)
// UART config
#define PROBE_UART_TX 0
#define PROBE_UART_RX 1
#define PROBE_UART_INTERFACE uart0
#define PROBE_UART_BAUDRATE 115200
#endif

// LED config

#define PROBE_PRODUCT_STRING "Debugprobe on ZERO (CMSIS-DAP)"

#endif

#endif
