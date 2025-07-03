#include<stdio.h>
void main()
{
	int a,b,total;
	char ch;
	printf("enter a number = ");
	scanf("%d",&a);
	fflush(stdin);

	printf("enter a operator =");
	scanf("%c",&ch);
	fflush(stdin);
	
	printf("enter a number = ");
	scanf("%d",&b);
	
	if(ch=='+')
		total=a+b;
	else if(ch=='-')
			total=a-b;
		else if(ch=='*')
				total=a*b;
				else 
					total=a/b;	
					
	printf("total result =%d",total);
	
}