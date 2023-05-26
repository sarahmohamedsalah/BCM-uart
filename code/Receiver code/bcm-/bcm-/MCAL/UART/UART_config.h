/*
 * UART_config.h
 *
 * Created: 5/13/2023 1:53:44 PM
 *  Author: Sarah
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_

/*************** CONDITIONS FOR OPERATION MODES ***************/
#define UART_ASYNCHRONOUS		0
#define UART_SYNCHRONOUS		1

#define PARITY_DISABLE			0
#define PARITY_ENABLE_EVEN		1
#define PARITY_ENABLE_ODD		2

#define STOP_BITS_1				0
#define STOP_BITS_2				1

#define CHARACTER_SIZE_5		0
#define CHARACTER_SIZE_6		1
#define CHARACTER_SIZE_7		2
#define CHARACTER_SIZE_8		3
#define CHARACTER_SIZE_9		4

#define CLOCK_RISING_EDGE		1
#define CLOCK_FALLING_EDGE		2

#define UART_IE_DISABLE			0
#define UART_IE_ENABLE			1

#define NORMAL_SPEED			0
#define DOUBLE_SPEED			1

#define TRANSMIT_DISABLE		0
#define TRANSMIT_ENABLE			1

#define RECEIVE_DISABLE			0
#define RECEIVE_ENABLE			1



#endif /* UART_CONFIG_H_ */