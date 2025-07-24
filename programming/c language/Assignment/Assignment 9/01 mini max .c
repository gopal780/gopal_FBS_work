#include<stdio.h>
void main()
{
	int no[10];
	printf("enter the element in array= ");
	for (int i=0;i<10;i++)
	scanf("%d",&no[i]);	
	for (int i=0;i<10;i++)
	printf("%d ",no[i]);
	
	int min=no[0],max=no[0];
	for (int i=0;i<10;i++)
		{
			if(no[i]>max)
				max=no[i];
				min=no[i];
		}
		printf("\n maximum number in array=%d\n",max);
		for (int i=0;i<10;i++)
		{
			if(no[i]<min)
				min=no[i];
		}
		printf("minimum number in array=%d\n",min);
		
		
		

}