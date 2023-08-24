#include<stdio.h>
int main(void)
{
	float x,y,temp;
	printf("enter first number \n");
	scanf("%f",&x);
	printf("enter second number \n");
	scanf("%f",&y);
	temp=x;
	x=y;
	y=temp;
	printf("\n first number after swapping is=%f",x);
	printf(" \n second number after swapping is =%f",y);
	
	
}