//WAP to Form a New String where the First Character and the Last Character have 
//been Exchanged
#include<stdio.h>
void mystrfirstlast(char*);
void main()
{
	char str[100];
	printf("enter a elemnt in str ");
	scanf("%s",str);
	char ch;
	mystrfirstlast(str);
	printf("%s",str);
}
void mystrfirstlast(char*src)
{
	int i=0;
	while (src[i]!='\0')
	i++;
	if(i>0);
	{
		char first=src[0];
		src[0]=src[i-1];
		src[i-1]=first;
	}
	
	
}