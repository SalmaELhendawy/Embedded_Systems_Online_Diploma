#include<stdio.h>
int main(void)
{
	float x,y;
	printf("enter first number");
	scanf("%f",&x);
	printf("enter second number");
	scanf("%f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf(" \n first number after swap is %f",x);
	printf("\n second number after swap is %f",y);
	
}