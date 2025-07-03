#include<stdio.h>
void main()
{
	int num;
	printf("enter a number =");
	scanf("%d",&num);
	if(num%3==0&&num%5==0)
		printf("number divisible by both\n");
		else if(num%3==0)
			printf("number is divisible by 3 but not by 5\n");
			else if(num%5==0)
				printf("number is divisible by 5 but not by 3\n");
				else 
					printf("number is divisible by none\n");
					
}