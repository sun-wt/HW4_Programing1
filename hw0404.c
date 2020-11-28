#include<stdio.h>
#include<stdint.h>
#include"hw0404.h"

int main()
{
	int32_t r,n;
  	printf("Please enter the resistance (1-100):");
	scanf("%d",&r);
	printf("Please enter n (1-100):");
	scanf("%d",&n);
	printf("%f\n",Resistance(n,r));
}
	 

