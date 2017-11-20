/**************************
通信协议：单总线
作者：董利强
时间：2017年11月4日
**************************/
#ifndef __DS18B20_H__
#define __DS18B20_H__
#include<STC89C5xRC.h>
#include <intrins.h>
#define uchr unsigned char 
#define uint unsigned int 
extern uchr DS18B20_Temp_data[6];
/*-------------------------------------
	            IO口定义
--------------------------------------*/
sbit DS18_PortDq = P2^7;
#define DS18_DQ_Reset() DS18_PortDq=0
#define DS18_DQ_Set() DS18_PortDq=1


/*-------------------------------------
	            函数定义
--------------------------------------*/
//操作函数
void DS18_Start();
int DS18_ReaTemp();

//辅助函数
void DS18_Delay15us();
bit DS18_Rst();
void DS18_WriByte(uchr Byte);
uchr DS18_ReaByte();


#endif 
