#include<stdio.h>
#include<stdint.h>
#include<ctype.h>
#include"hw0404.h"

int main()
{
	int32_t r,n;
  	printf("Please enter the resistance (1-100):");
	scanf("%d",&r);
	if(r<1||r>100)
	{
		printf("invaild input\n");
		return 0;
	}
	printf("Please enter n (1-100):");
	scanf("%d",&n);
	if(n<1||n>100)
	{
		printf("invaild input\n");
		return 0;
	}
	printf("%g\n",Resistance(n,r));
}
	 

