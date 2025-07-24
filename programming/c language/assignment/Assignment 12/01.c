//Write a program to scan string from user then scan a single character and search it 
//in a accepted string.
#include<stdio.h>
int mystrsrch(char*,char);
void main()
{
	char str[100];
	printf("enter elemnt in string ");
	scanf("%s",str);
	char ch;
	printf("enetr char you want to search ");
	scanf(" %c",&ch);
	int reult=mystrsrch(str,ch);
	if(reult==1)
		printf("found");
	else
		printf("not found");
}
int mystrsrch(char*src,char ch)
{
	int i=0;
	while(src[i]!='\0')
	{
		if(src[i]==ch)
			return 1;
		i++;
	}
	return 0;
}