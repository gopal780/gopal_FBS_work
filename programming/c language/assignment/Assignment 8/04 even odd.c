//Find odd and even among the numbers.
#include<stdio.h>
void main()
{
	int arr[5],even[5],odd[5];
	int evensize=0,oddsize=0;
	
	printf("enter value in array=");
	for(int i=0;i<5;i++)
		scanf("%d",&arr[i]);
	printf("array value is =");
	
	for(int i=0;i<5;i++)
		printf("%d ",arr[i]);
		
	for(int i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			even[evensize]=arr[i];
			evensize++;
	 	}
		else 
		{
			odd[oddsize]=arr[i];
			oddsize++;
		}
	}
	
	printf("\neven number is= ");
	for(int i=0;i<evensize;i++)
		printf("%d ",even[i]);
	
	printf("\nodd number is=");	
	for(int i=0;i<oddsize;i++)
		printf("%d ",odd[i]);
	
}
