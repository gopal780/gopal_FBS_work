// Merge two arrays
#include<stdio.h>
void main()
{
	int a[5],b[5],c[10];
	printf("enter the value in array a=");
	for(int i=0;i<5;i++)
		scanf("%d",&a[i]);
	for(int i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\n enter the value in array b=");
	for(int i=0;i<5;i++)
		scanf("%d",&b[i]);
	for(int i=0;i<5;i++)
		printf("%d ",b[i]);
	printf("\n addition of two array c=");
	for(int i=0;i<5;i++)
	{
		c[i]=a[i];
	}	
	for(int i=0;i<5;i++)
	{
		c[i+5]=b[i];
	}
	for(int i=0;i<10;i++)
		printf("%d ",c[i]);
	
}