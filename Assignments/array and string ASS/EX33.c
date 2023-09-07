#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[100], temp;
	int i,j=0;
	printf("\n enter the string :");
	gets(str);
	i=0;
	j=strlen(str)-1;
	while(i<j)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf(" \n reverse string is= %s", str);
	return(0);
	
}