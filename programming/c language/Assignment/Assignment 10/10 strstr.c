#include<stdio.h>
#include<string.h>
void main()
{
	char ch[100];
	char c;
	printf("entre elemnt in string \n");
	scanf("%s",ch);
	
	printf("enter a element you want to search ");
	scanf("%c",&c);
	getchar();
	char *ser=strstr(ch, c );
	if(ser!=NULL)
		printf("found %s",ser);
	else
		printf("not found");
	
}