#include<stdio.h>
int main (void)
{
	int x;
	printf("enter the number");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("number is even");
	}
	else if(x%2 !=0)
	{
		printf("number is odd");
	}
	else
	{
		printf("wrong choose of number");
		
	}
}