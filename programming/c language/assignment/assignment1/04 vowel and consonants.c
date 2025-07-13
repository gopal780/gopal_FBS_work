#include<stdio.h>
void main()
{
	char lt;
	printf("enter a letter = ");
	scanf("%c",&lt);
	if(lt=='a'||lt=='e'||lt=='i'||lt=='o'||lt=='u'||lt=='A'||lt=='E'||lt=='I'||lt=='O'||lt=='U')
	{
		printf("number is vowel\n",lt);
	
	}
	else
	{
		printf("numnber is consonants\n",lt);
	}	
}