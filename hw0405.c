#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<ctype.h>
#include"hw0405.h"

int main()
{
	int32_t a,b,c,d;
	int32_t ans;
	srand(time(NULL));
	a=(rand()%9)+1;
	b=(rand()%10)+0;
	c=(rand()%10)+0;
	d=(rand()%10)+0;
	while(b==a) b=(rand()%10)+0;
	while(c==a||c==b) c=(rand()%10)+0;
	while(d==a||d==b||d==c) d=(rand()%10)+0;
	ans=a*1000+b*100+c*10+d;

	int32_t num;
	int32_t times=1;
	int32_t A,B;
	
	printf("Bulls and Cows Game\n");
	do
	{	
		int32_t i;
		printf("Round %d >>>\n",times);
		printf("	Your Guess: ");
		i=scanf("%d",&num);
		Guess(num,ans,&A,&B);
		if(i==1 && getchar()=='\n')
		{			
			if(num<1000||num>9999)
				printf("	\033[32mResponse:Invaild Guess\n\033[0m");
			else if(Range(num)==0)
				printf("	\033[32mResponse:Invaild Guess\n\033[0m");
			else if(num!=ans)
			{
				printf("	\033[34mResponse:%dA%dB\n\033[0m",A,B);
				times+=1;
			}
			else if(num==ans)
			{
				printf("	\033[31mResponse: Bingo! Congratulations.\n\033[0m");
			}
		}
		else
		{
			printf("	Response:wrong input\n");
			return 0;			
		}
	}while(num!=ans);
	
	return 0;			
}
