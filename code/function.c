
#include "function.h"
void initGpioMode(char GPIO,int GPIO_Pin,int GPIO_Speed,char GPIO_Mode[],char GPIO_PuPd[])
{
	
     GPIO_InitTypeDef  GPIO_InitStructure;
     /*PIN的值  uint16 */
     unsigned short Pin_data[17]={
         0x0001,0x0002,0x0004,0x0008,
         0x0010,0x0020,0x0040,0x0080,
         0x0100,0x0200,0x0400,0x0800,
         0x1000,0x2000,0x4000,0x8000,
         0xFFFF};


    /*------------------GPIO口初始化-------------------*/
    switch(GPIO)
    { 
        case 'A':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOA,ENABLE);
        break;
        case 'B':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOB,ENABLE);
        break;
        case 'c':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOC,ENABLE);
        break;
        case 'D':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);
        break;
        case 'E':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOE,ENABLE);
        break;
        case 'F':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOF,ENABLE);
        break;
        case 'G':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOG,ENABLE);
        break;
        case'H':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOH,ENABLE);
        break;
        case 'I':
        RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOI,ENABLE);
        default:
        break;
   }

    GPIO_InitStructure.GPIO_Pin = Pin_data[GPIO_Pin]; 
    if(IsEquals(GPIO_Mode,"IN")== 1)
    {
        GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN;
    }
    else if(IsEquals(GPIO_Mode,"OUT")== 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    else if(IsEquals(GPIO_Mode,"AF")== 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF;
    else if(IsEquals(GPIO_Mode,"AN'")== 1)
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AN;
    else
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    //looking for bug,huh?,u neet go to cheak what u input at this func
{
    if(GPIO_Speed == 25)
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_25MHz;
    else if (GPIO_Speed == 50)
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    else if (GPIO_Speed == 100) 
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_100MHz;
    else
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_25MHz;
}

 {  if(IsEquals(GPIO_PuPd,"NO")== 1)
    {
        GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
    }
    else if(IsEquals(GPIO_PuPd,"UP")== 1)
    {
        GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_UP;
    }
    else if(IsEquals(GPIO_PuPd,"DOWN")== 1)
    {
        GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_DOWN;
    }
    else
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
}

    switch(GPIO)
    { 
        case 'A':
        GPIO_Init(GPIOA, &GPIO_InitStructure);
        break;
        case 'B':
         GPIO_Init(GPIOB, &GPIO_InitStructure);
        break;
        case 'c':
         GPIO_Init(GPIOC, &GPIO_InitStructure);
        break;
        case 'D':
         GPIO_Init(GPIOD, &GPIO_InitStructure);
        break;
        case 'E':
         GPIO_Init(GPIOE, &GPIO_InitStructure);
        break;
        case 'F':
         GPIO_Init(GPIOF, &GPIO_InitStructure);
        break;
        case 'G':
         GPIO_Init(GPIOG, &GPIO_InitStructure);
        break;
        case'H':
         GPIO_Init(GPIOH, &GPIO_InitStructure);
        break;
        case 'I':
        GPIO_Init(GPIOI, &GPIO_InitStructure);        
        default:
        break;
   }
    GPIO_Init(GPIOE, &GPIO_InitStructure);


}

int IsEquals(char str1[],char str2[])
{
    int flag;
		int i =0;
    while(str1[i]!='\0' && str2[i]!= '\0')
    {
        if(str1[i] == str2[i])
        {
            flag=1;
        }
        else 
				{flag =0;}
				i++;
    }
    return flag;
}