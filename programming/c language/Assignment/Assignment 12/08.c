//WAP to Calculate the Number of Words Present in a String 
#include<stdio.h>
int mystrcal(char*);
void main()
{
	char str[50]="aaditya hari om mokar rushi";
	int result=mystrcal(str);
	printf("%d",result);
}
int mystrcal(char*src)
{
	int i=0,count=1;
	while(src[i]!='\0')
	{
		if(src[i]==' ')
		{
			count++;
		}
		i++;
	}
	return count;
}