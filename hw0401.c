#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include"hw0401.h"
int main()
{
  int32_t num;
	printf("Please enter an integer(1~3000):");
  scanf("%d",&num);
  if(num<1||num>3000){
    printf("invaild input\n");
    return 0;
  }
  if(num/1000>0){
    char nm=Roman(num/1000*1000);
  }
  if(num/100>0){
    char nc=Roman((num-num/1000*1000)/100*100);
  }
  if(num/10>0){
    char nx=Roman((num-num/100*100)/10*10);
  }
  if(num/1>0){
    char ni=Roman((num-num/10*10));
  }
	printf("\n");
}
    
    
    
    
