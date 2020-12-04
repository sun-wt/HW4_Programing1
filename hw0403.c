#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include"hw0403.h"
int main()
{
	int32_t k;
	printf("k-th order Taylor for e\n");
	printf("Please enter k: ");
	scanf("%d",&k);
	if(k<1||k>pow(2,32))
	{
		printf("invaild input");
		return 0;
	}
	else 
	for(int i=1;i<=k;i++)
	{
		printf("%2d %f\n",i,Taylor(i));
	}
}
