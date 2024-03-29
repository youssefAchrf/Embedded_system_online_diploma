/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************/
#include "stdio.h"
#define RCC_BASE 0x40021000
#define portA_BASE 0x40010800
typedef volatile unsigned int vint32_t;

#define RCC_APB2ENR *(volatile uint32_t*)(RCC_BASE + 0x18)
#define GPIO_CRH    *(volatile uint32_t*)(portA_BASE + 0x04)
#define GPIO_ODR    *(volatile uint32_t*)(portA_BASE + 0x0C)

typedef union{
	vint32_t all_fields;
	struct{
		vint32_t reserved:13;
		vint32_t pin13:1;
	}pins;

}R_ODR_t;

volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(portA_BASE + 0x0C);

int main(void)
{
	RCC_APB2ENR|= 1<<2;
	GPIO_CRH &= 0xFF0FFFFF;
	GPIO_CRH |= 0x00200000;
	while(1){
		R_ODR ->pins.pin13 = 1;
		for (int i=0; i<50000;i++);
		R_ODR ->pins.pin13 = 1;
		for (int i=0; i<50000;i++);

	}

	return 0;
}
