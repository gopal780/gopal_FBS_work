#include<stdio.h>
#include<string.h>
void main()
{
	
	char ch[10];
	char bh[10];
	int n;
	printf("enter a character in string ");
	scanf("%s",&ch);
	printf("enter a element you want to copy ");
	scanf("%d",&n);
	printf("the element in bh is %s",strncpy(bh,ch,n));
	
}