//Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
void mystrcpy(char*,char*);
void mystrrev(char*);
void main()
{
	char str[50],str1[50];
	printf("enter elemnt in string one ");
	scanf("%s",str);
	
	mystrcpy(str1,str);
	printf("coopie of original string %s \n",str1);
	mystrrev(str1);
	printf("%s \n",str1);
	if(strcmp(str,str1)==0)
		printf("string is palindrome ");
	else
		printf("string is not palindrome ");
	
}
void mystrcpy(char*dest,char*src)
{
	int i=0;
	while(src[i]!='\0')
	{
		dest[i]=src[i];
		i++;
	}
	dest[i]='\0';
}
void mystrrev(char *src) {
    int start = 0;
    int end = strlen(src) - 1;

    while (start < end) {
        char temp = src[start];
        src[start] = src[end];
        src[end] = temp;
        start++;
        end--;
    }
}

