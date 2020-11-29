#include<stdio.h>
#include<stdint.h>
#include"hw0402.h"
int main()
{
	int32_t n;
	printf("Please enter the disk number(2-20):");
	scanf("%d",&n);
	if(n<2||n>20)
	{
		printf("invaild input\n");
		return 0;	
	}
	else
	{
		char ans=Hanoi_recursive(n,'1','2','3');
	}
}

