#include<stdio.h>
void main()
{
	int no,rev=0,r;
	printf("enter a number =");
	scanf("%d",&no);
	int temp=no;
	while (no>0)
	{
		r=no%10;
		no=no/10;
		rev=rev*10+r;	
	}
	if(temp==rev)
		printf("number is palindorme");
	else
		printf("number is not palindrome");
} 