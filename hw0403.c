#include<stdio.h>
#include<stdint.h>
#include"hw0403.h"
int main()
{
	int32_t k;
	printf("k-th order Taylor for e\n");
	printf("Please enter k: ");
	scanf("%d",&k);
	if(k<1)
	{
		printf("invaild input");
		return 0;
	}
	else printf("%f\n",Taylor(k));
}
