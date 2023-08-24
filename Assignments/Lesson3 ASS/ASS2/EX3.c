#include<stdio.h>

int main(void)
{
	int x,y,z,MAXIMUM, maximum;
	printf(" \n enter your numbers");
	scanf("%d %d %d",&x,&y,&z);
	MAXIMUM=x>y? x:y;
	maximum=MAXIMUM>z? MAXIMUM:z;
	printf("your maximum number is=%d",maximum);
	
}