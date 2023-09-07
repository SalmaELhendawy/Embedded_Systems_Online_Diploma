#include<stdio.h>

int main (void)
{
	float a[2][2],b[2][2],c[2][2];
	int i,j;
	printf("enter elements of first matrix:\n");
	//for matrix a
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("  enter a element %d %d",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	// for matrix b
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf(" enter b elements %d %d", i+1, j+1);
			scanf("%f",&b[i][j]);
		}
	}
	//for c matrix adding the two matrices
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			
		}
	}
	// printing the result
	printf("the sum of two matrices");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%f",c[i][j]);
			if(j==1)
			printf("\n \n");
		}
	}
	
	
	
	
}