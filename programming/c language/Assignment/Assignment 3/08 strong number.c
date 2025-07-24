#include<stdio.h>
void main()
{
	int n=145,fact=1,sum=0,i=1;
	int temp=n,digit;
	while(temp>0)
	{
		digit=temp%10;
		printf("%d is digit\n",digit);
		fact=1,i=1;
		while(i<=digit)
		{
			fact=fact*i;
			i++;
		}
		printf("%d is fact\n ",fact);
		sum+=fact;
		printf("%d is sum\n",sum);
		temp=temp/10;
		printf("%d is temp \n",temp);
	}
	if(n==sum)
		printf("%d is a strong number",n);
	else
		printf("%d is not a strong number",n);
}
