#include<stdio.h>

int main(void)
{
	int i,n,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("summetion is =%d",sum);
	
}