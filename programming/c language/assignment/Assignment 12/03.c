//WAP to Remove the nth Index Character from a Non-Empty String 
#include<stdio.h>
void mystrrem(char* ,int);
void main()
{
	char str[]="gopal here";
	printf("enter element in string ");
	scanf("%s",str);
	int n;
	printf("enter the index you want to remove ");
	scanf("%d",&n);
	mystrrem(str,n);
	printf("%s",str);	
}
void mystrrem(char*src,int n)
{
	int i=n;
	while(src[i]!='\0')
	{
		src[i]=src[i+1];
		i++;
	}
	src[i]='\0';
}