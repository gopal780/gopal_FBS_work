//WAP to Count the Number of Vowels in a String 
#include<stdio.h>
#include<string.h>
void mystrvow(char*,int*);
void main()
{
	char str[50];
	printf("enter char to check vowel ");
	scanf("%s",str);
	int count=0;
	mystrvow(str,&count);
	printf("%d",count);
} 
void mystrvow(char*src,int*count)
{
	int i=0;
	while(src[i]!='\0')
	{
		if(src[i]=='a'||src[i]=='e'||src[i]=='o'||src[i]=='i'||src[i]=='u'||src[i]=='A'||src[i]=='E'||src[i]=='O'||src[i]=='I'||src[i]=='U')
		{
			(*count)++;
		}
		i++;
	}
}