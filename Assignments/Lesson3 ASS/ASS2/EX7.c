#include<stdio.h>

int main (void)
{
	int x, result=1;
	printf("please enter number");
	scanf("%d",&x);
	if(x<0)
	{
		printf("error");
	}
	else if(x>0)
	{
		for(x;x!=0;x--)
		{
			result=result*x;
		}
		printf("result is=%d",result);
	}
	
}