//Reverse the given array
#include<stdio.h>
void main()
{
	int a[5],temp[5];
	printf("enter the value in array a=");
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("number of array is =");
	for(int i=0;i<5;i++)
		printf("%d ",a[i]);
		
	printf("\nrevers value of array a= ");
	for(int i=0;i<5;i++)
	{
		temp[i]=a[4-i];
	}
	for(int i=0;i<5;i++)
	{
		printf("%d ",temp[i]);
	}
}