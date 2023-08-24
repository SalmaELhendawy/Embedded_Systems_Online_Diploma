#include<stdio.h>

int main(void)
{
	float a,b;
	char o;
	printf(" \n enter + or - or * or /");
	scanf("%c",&o);
	printf("\n please enter two numbers");
	scanf("%f %f",&a,&b);
	switch(o)
	{
		case '+' :
		printf(" summetion is=%f",a+b);
		break;
		
		case'-':
		printf("subtrction is =%f",a-b);
		break;
		
		case'*':
		printf("multeplication is=%f",a*b);
		break;
		
		case '/':
		printf("division is=%f", a/b);
		break;
		
		
	}
	
}