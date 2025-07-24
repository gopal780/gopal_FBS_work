#include<stdio.h>
#include<string.h>
void main()
{
	
	char ch[20];
	char bh[10];
	int res;
	printf("enter a character in string a ");
	scanf("%s",ch);
	printf("enter a character in string b ");
	scanf("%s",bh);
	res=strcmp(ch,bh);
	if(res==0)
	printf("the element is eqaul same");
	else
	printf("the element is not eqaul");
	
}