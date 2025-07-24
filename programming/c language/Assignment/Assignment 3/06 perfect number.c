//6 Check the given number is Perfect number or not.
//Input: n = 28
//Output: Perfect
#include<stdio.h>
void main()
{
	int n=28,sum=0;
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
		printf("%d is Perfect number",n);
	else
		printf("%d is not Perfect number",n);
}