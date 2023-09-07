#include<stdio.h>

int main(void)
{
	char c[1000], ch;
	int i, count=0;
	printf("enter a string:");
	gets(c);
	printf("enter a charachter to find frequancy:");
	scanf("%c",&ch);
	for(i=0;c[i]!='\0';i++)
	{
		if(ch==c[i])
			++count;
	}
	printf("frequancy of %c=%d",ch,count);
	return(0);
	
}