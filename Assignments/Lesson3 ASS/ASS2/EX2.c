#include<stdio.h>
int main(void)
{
	char c;
	printf("enter an alphabet");
	scanf("%c",c);
	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
	{
      printf("alphabet is vowel");
	}	
	else 
	{
		printf("alphabet is consonant");
	}
		
}