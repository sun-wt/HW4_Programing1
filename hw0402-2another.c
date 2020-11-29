#include"hw0402.h"
char Hanoi_loop(int32_t n)
{
	int times=1;
	int disk=1;
	int z=5;
	int rod;
	char path[n];
	for(int i=0;i<n;i++)
	{
		path[i]=1;
	}
	for(times=1;times<pow(2,n);times++)
	{
		disk=1;
		if(z==3)
		{
			z=5;
		}
		else
		{
			z=z-1;
		}
		for(int j=times;j%2==0;j=j/2)
		{
			disk+=1;
		}
		rod=z-path[disk-1];
		path[disk-1]=rod;
		printf("move disk %d to rod %d\n",disk,rod);		
	}
}

	
