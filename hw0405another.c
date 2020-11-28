#include"hw0405.h"

void Guess(int num,int ans,int*A,int*B)
{
	int32_t a,b,c,d;
	int32_t na,nb,nc,nd;
	int32_t timeA=0;
	int32_t timeB=0;
	a=ans/1000;
	b=(ans%1000)/100;
	c=((ans%1000)%100)/10;
	d=((ans%1000)%100)%10;
	int ansArray[4]={a,b,c,d};
	

	na=num/1000;
	nb=(num%1000)/100;
	nc=((num%1000)%100)/10;
	nd=((num%1000)%100)%10;
	int numArray[4]={na,nb,nc,nd};
	
		
	for(int k=0;k<4;k++)
	{
		for(int l=0;l<4;l++)
		{
			if(k==l && numArray[k]==ansArray[l])
			timeA+=1;
			else if(k!=l && numArray[k]==ansArray[l])
			timeB+=1;
		}
	}
	*A=timeA;
	*B=timeB;
}


