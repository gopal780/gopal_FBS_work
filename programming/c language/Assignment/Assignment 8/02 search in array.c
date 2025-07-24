//Search the given number in array.  
#include<stdio.h>
void main()
{
	int arr[10];
	printf("enter the value in array= \n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
	int sr;
	printf("\nenter a number you want to search=");
	scanf("%d",&sr);
	int flag=-1;
	for(int i=0;i<10;i++)
	{
		if(arr[i]==sr)
			{
			flag=i;
			break;
		}
	}
	if(flag==-1)
		printf("not found");
	else
		printf("number found at %d",flag);
		
}