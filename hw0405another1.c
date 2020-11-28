#include"hw0405.h"
int ran()
{
	int32_t a,b,c,d;
	int32_t ans;
	srand(time(NULL));
	a=(rand()%10)+0;
	b=(rand()%10)+0;
	c=(rand()%10)+0;
	d=(rand()%10)+0;
	while(b==a) b=(rand()%10)+0;
	while(c==a||c==b) c=(rand()%10)+0;
	while(d==a||d==b||d==c) d=(rand()%10)+0;
	ans=a*1000+b*100+c*10+d;
	return ans;

}
