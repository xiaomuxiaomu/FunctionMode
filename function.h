#ifndef __FUNCTION_H
#define __FUNCITON_H

#include <stm32f4xx.h>
#include "delay.h"


#define u8 unsigned char
#define u16 unsigned short
#define u32 unsigned int


void initGpioMode(char GPIO,int GPIO_Pin,int GPIO_Speed,char GPIO_Mode[],char GPIO_PuPd[]);

int IsEquals(char str1[],char str2[]);



void TIM5_PWM_Init(u32 arr,u32 psc);
void change_speed (int flag);
void set_target(u8 temp,int count);

#endif
