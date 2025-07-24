//WAP to Remove the Characters of Odd Index Values in a String 
#include<stdio.h>
void mystrrem(char*);
void main()
{
	char str[50];
	printf("enter elment in string ");
	scanf("%s",str);
	mystrrem(str);
	printf("%s",str);
}
void mystrrem(char*src)
{
	int i=0,j=0;
	while(src[i]!='\0')
	{
		if(i%2==0)
		{
			src[j++]=src[i];
		}
	i++;
	}
	src[j]='\0';
	
}