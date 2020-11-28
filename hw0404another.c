#include"hw0404.h"
double Resistance(int32_t n,int32_t r)
{
	if(n==1)
	{
		return r+r;
	}
	else
	{
		return (r*Resistance(n-1,r)/(r+Resistance(n-1,r)))+r;
	}
}
