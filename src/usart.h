#pragma once


void usart_init(void);
void usart_send_str(char *p);
void usart_send_direct(char *p);

// should be called once per loop
void uart_flush(void);
