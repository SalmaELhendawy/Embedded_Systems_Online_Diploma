#include<stdio.h>
int main(void)
{
	int a[30], element, num ,i ;
	
	printf("\n enter numbers of elemnts");
	scanf("%d",&num);
	printf(" enter the values :");
	for(i=0; i< num ;i++)
	{
		scanf("%d",&a[i]);
	}
	// reading the element to be searched
	
	printf("\n enter the element to be searched");
	scanf("%d",&element);
	 i=0;
	 while(i< num&& element !=a[i])
	 {
		 // if i<num then match found
		 if(i<num)
		 {
			 printf("number found at location %d",i+1);
		 }
		 else 
		 {
			 printf("number not found");
		 }
		 break;
	 }
	 return(0);
}