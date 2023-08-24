#include<stdio.h>

int main(void)
{
	char c;
	printf("enter character");
	scanf("%c",c);
	if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	{
		printf("character is an alphabet");
	}
	else
	{
		printf("character is not an alphabet");
		
	}
}