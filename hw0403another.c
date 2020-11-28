#include"hw0403.h"
double Taylor(int32_t k)
{
	int32_t f=1;
	float fn;
	if(k==1) f=1;
	else{
		for(int i=1;i<=k;i++)
		{
			f=f*i;
		}
	}
	fn=1.0/f;
	if(k==1) return 2;
	else return	Taylor(k-1)+fn;
}
