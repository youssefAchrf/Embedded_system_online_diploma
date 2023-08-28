#include "uart.h"


 unsigned char buff[100]="learn-in-depth: Youssef";
void main(void)
{
   Uart_send_string(buff);

}