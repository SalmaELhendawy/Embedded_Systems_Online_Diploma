#include<stdio.h>

int main(void)
{
	float x;
	printf("enter a number");
	scanf("%f",&x);
	if(x>0)
	{
		printf("number is positive");
	}
	else if(x==0)
	{
		printf("number is zero");
	}
	else if(x<0)
	{
		printf("number is negative");
	}
	else
	{
		("wrong choise, enter again");
	}
}