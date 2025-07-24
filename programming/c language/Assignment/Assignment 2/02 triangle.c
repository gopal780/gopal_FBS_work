#include<stdio.h>
void main()
{
	int s1,s2,s3;
	printf("enter three sides of trinage = ");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1==60&&s2==s3)
		printf("triangle is equaletral");
	else if(s1==s2||s1==s3||s2==s3)
			printf("triangle is isoletral");
		else
			printf("triangle is scalanel");
}