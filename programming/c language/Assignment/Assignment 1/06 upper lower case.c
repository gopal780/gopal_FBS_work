#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("upper case");
	else 
		printf("lower case");
}