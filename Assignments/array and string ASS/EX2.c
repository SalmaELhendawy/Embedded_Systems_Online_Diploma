#include<stdio.h>

int main (void)
{
	int n,i;
	float a[100], sum=0.0 , average;
	printf("enter number of data: ");
	scanf("%d",&n);
	while(n>100 || n<=0)
	{
		printf(" error number should be between range 1_100");
		printf(" try again:");
		scanf("%d",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("%d enter number :",i+1);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	average=sum/n;
	printf("average=%.2f",average);
	
	
	
}