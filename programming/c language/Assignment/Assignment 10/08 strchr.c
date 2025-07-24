#include<stdio.h>
#include<string.h>
void main()
{
	
	char ch[20];
	char ser;
	char *ptr;
	printf("enter a element in string ");
	scanf("%s", ch);
	getchar();
	printf("enter a element you want to find ");
	scanf("%c",&ser);
	ptr=strchr(ch,ser);
	if(ptr!=NULL)
		printf("found");
	else 
		printf("not found");
	
}