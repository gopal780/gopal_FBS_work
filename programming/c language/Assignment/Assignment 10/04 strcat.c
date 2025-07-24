#include<stdio.h>
#include<string.h>
void main()
{
	
	char ch[20];
	char bh[10];
	int n;
	printf("enter a character in string a ");
	scanf("%s",&ch);
	printf("enter a character in string b ");
	scanf("%s",&bh);
	strcat(ch,bh);
	printf("the element in bh is %s",ch);
	
}