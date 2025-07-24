#include<stdio.h>
void main()
{
	int age;
	printf("enter your age = ");
	scanf("%d",&age);
	if(age<=12)
		printf("child");
		else if(age>=12&&age<=19)
				printf("teenager");
				else if(age>=20&&age<=59)
						printf("adult");
						else if(age>=60||age<=110)
								printf("senior");
}