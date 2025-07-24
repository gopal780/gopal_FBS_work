#include<stdio.h>
void main()
{
	int a;
	printf("enter range to check number is perfect or not");
	scanf("%d",&a);
	for(int j=0;j<=a;j++)
	{
	int n=j,sum=0;
	int i=1;
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==n)
		printf("%d ",n);
	}
//	else
//		printf("%d is not Perfect number",n);
}