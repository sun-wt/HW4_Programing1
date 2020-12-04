#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<ctype.h>
#include"hw0405.h"
int main()
{
	
	int32_t num;
	int32_t times=1;
	int32_t A,B;
	int32_t Ans=ran();
	printf("Bulls and Cows Game\n");
	do
	{	
		int32_t i;
		printf("Round %d >>>\n",times);
		printf("	Your Guess: ");
		i=scanf("%d",&num);
		Guess(num,Ans,&A,&B);
		if(i==1 && getchar()=='\n')
		{			
			if(num<99||num>9999)
				printf("	\033[33mResponse:Invaild Guess\n\033[0m");
			else if(((num/1000==(num%1000)/100||
     num/1000==((num%1000)%100)/10||
  	 num/1000==((num%1000)%100)%10||
     (num%1000)/100==((num%1000)%100)/10||
  	 (num%1000)/100==((num%1000)%100)%10||
  	 ((num%1000)%100)/10==((num%1000)%100)%10)))
				printf("	\033[33mResponse:Invaild Guess\n\033[0m");
			else if(num!=Ans)
			{
				printf("	\033[34mResponse:%dA%dB\n\033[0m",A,B);
				times+=1;
			}
			else if(num==Ans)
			{
				printf("	\033[31mResponse: Bingo! Congratulations.\n\033[0m");
			}
		}
		else
		{
			printf("	Response:wrong input\n");
			return 0;			
		}
	}while(num!=Ans);
	
	return 0;			
}
