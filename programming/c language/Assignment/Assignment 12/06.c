//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
void mystrrep(char*);
void main()
{
	char str[]="hello good afternoon";
	mystrrep(str);
	printf("%s",str);
}
void mystrrep(char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		if(src[i]=='')
		{
			src[i]='@';
		}
		i++;
	}
}