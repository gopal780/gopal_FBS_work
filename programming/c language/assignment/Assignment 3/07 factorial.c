#include<stdio.h>
void main()
{
	int no=5,fact=1;
	int i=1;
	while(i<=no)
	{
		printf("%d\n",i);
		fact=fact*i;
		i++;
	}
	printf("factorial of number=%d\n",fact);
}