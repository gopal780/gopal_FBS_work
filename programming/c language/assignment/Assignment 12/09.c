//WAP to Take in Two Strings and Display the Larger String without Using Built-in 
//Functions 
#include<stdio.h>
int mystrlag(char*);
int mystrlag1(char*);
void main()
{
	char str[50],str1[50];
	printf("enter elemnt in string one ");
	scanf("%s",str);
	printf("enter elemnt in string two ");
	scanf("%s",str1);
	
	int result=mystrlag(str);
	int result1=mystrlag1(str1);
	if(result>result1)
		printf("%s",str);
	else
		printf("%s",str1);
}
int mystrlag(char*src)
{
	int i=0,count=0;
	while(src[i]!='\0')
	{ 
		count++;
		i++;
	}
	return count;
}
int mystrlag1(char*src1)
{
	int i=0,count=0;
	while(src1[i]!='\0')
	{ 
		count++;
		i++;
	}
	return count;
}