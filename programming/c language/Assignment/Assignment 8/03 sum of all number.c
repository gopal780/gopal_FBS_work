//Find sum of all numbers.
#include<stdio.h>
void main()
{
	int no[10],sum;
	printf("enter the element in array= ");
	for (int i=0;i<10;i++)
	scanf("%d",&no[i]);	
	for (int i=0;i<10;i++)
	{
		printf("%d ",no[i]);
		sum=sum+no[i];
	}
	printf("\nsum of all number is =%d",sum);		
}