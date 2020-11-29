#include"hw0402.h"
char Hanoi_recursive(int32_t disk,char a,char b,char c)
{
	if(disk>0)
	{
		Hanoi_recursive(disk-1,a,c,b);
		printf("move disk %d to rod %c\n",disk,c);
		Hanoi_recursive(disk-1,b,a,c);
	}
}
