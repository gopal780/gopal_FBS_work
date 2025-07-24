//Sort the array.
#include<stdio.h>
void main()
{
	int a[5];
	printf("enter value in array = ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("value in array is = ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
	for(int i=0;i<5;i++)
	{
		int flag=0;
		for(int j=0;j<5-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		
		}
			if(flag==0)
				break;
	}
	
	printf("\nswap number is = ");
	for(int i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	
}