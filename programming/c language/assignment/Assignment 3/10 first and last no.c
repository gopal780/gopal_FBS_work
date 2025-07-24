#include<stdio.h>
void main()
{
	int n=12345,lst,frt,r,sum;
	int temp=n;
	lst=n%10;
	printf("%d\n",n);
	printf("%d\n",lst);
	while (n>0)
	{
		r=n%10;
		n=n/10;
	}
	frt=r;
	printf("%d\n",frt);
	sum=frt+lst;
	printf("sum of first and last no is =%d",sum);
}