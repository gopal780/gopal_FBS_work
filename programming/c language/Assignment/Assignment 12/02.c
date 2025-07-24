//WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void mystrrep(char*,char);
void main()
{
	char str[]="gopal shyambihari joshi";
	char ch;
	printf("enetr char you want to replace ");
	scanf(" %c",&ch);
	mystrrep(str,ch);
	printf("%s",str);
}
void mystrrep(char*src,char ch)
{
	int i=0;
	while(src[i]!='\0')
	{
		if(src[i]==ch)
			src[i]='$';
		i++;
	}
	
}