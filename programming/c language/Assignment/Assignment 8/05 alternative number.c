//Print alternate elements in array. 
#include<stdio.h>
void main()
{
	int arr[10];
	printf("enter the value in array=");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	printf("number in array is = ");
	for(int i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nalternative number is = ");
	for(int i=1;i<10;i+=2)
	{
		printf("%d ",arr[i]);
	}
	
}