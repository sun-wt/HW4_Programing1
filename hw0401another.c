#include"hw0401.h"
char Roman(int num)
{
	if(num==900)printf("CM");
	else if(num==400)printf("CD");
	else if(num==90)printf("XC");
	else if(num==40)printf("XL");
	else if(num==9)printf("IX");
	else if(num==4)printf("IV");
	else{
		for(int i=1;i<4;i++)
		{
			if(num-1000>=0)
			{
				num=num-1000;
				printf("M");      
				}
		}
		if(num-500>=0)
		{
			num=num-500;
			printf("D");
		}
		for(int j=1;j<4;j++)
		{
			if(num-100>=0)
			{
				num=num-100;
				printf("C");      
			}
		}
		if(num-50>=0)
		{
			num=num-50;
			printf("L");
		}
		for(int k=1;k<4;k++)
		{
			if(num-10>=0)
			{
				num=num-10;
				printf("X");      
			}
		}
		if(num-5>=0)
		{
			num=num-5;
			printf("V");
		}
		for(int l=1;l<4;l++)
		{
			if(num-1>=0)
			{
				num=num-1;
				printf("I");      
			}
		}
	}
}


