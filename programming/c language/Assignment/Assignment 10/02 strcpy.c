#include<stdio.h>
#include<string.h>
void main()
{
	char ch[10];
	char bh[10];
	printf("enter a character in string ");
	scanf("%s",&ch);
	printf("the element in bh is %s",strcpy(bh,ch));
	
}