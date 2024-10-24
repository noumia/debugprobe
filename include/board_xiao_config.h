#ifndef BOARD_XIAO_H_
#define BOARD_XIAO_H_

#ifdef XIAO_PINOUT

#define PROBE_IO_RAW
#define PROBE_CDC_UART

#if defined(XIAO_NOUART)
#undef PROBE_CDC_UART
#endif

/* XIAO

A0 26 | 5V
A1 27 | GND
A2 28 | 3V3
A3 29 | 3 SWCLK
D4  6 | 4 SWDIO
D5  7 | 2 nRESET
TX  0 | 1 RX

*/

// PIO config
#define PROBE_SM 0
#define PROBE_PIN_OFFSET 3
#define PROBE_PIN_SWCLK (PROBE_PIN_OFFSET + 0) // 3
#define PROBE_PIN_SWDIO (PROBE_PIN_OFFSET + 1) // 4

// Target reset config
#define PROBE_PIN_RESET 2

#if defined(PROBE_CDC_UART)
// UART config
#define PROBE_UART_TX 0
#define PROBE_UART_RX 1
#define PROBE_UART_INTERFACE uart0
#define PROBE_UART_BAUDRATE 115200
#endif

// LED config
#define PROBE_USB_CONNECTED_LED 25
#define PROBE_DAP_RUNNING_LED   17

#define PROBE_PRODUCT_STRING "Debugprobe on XIAO (CMSIS-DAP)"

#endif

#endif
