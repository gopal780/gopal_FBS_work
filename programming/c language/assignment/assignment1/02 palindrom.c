#include<stdio.h>
void main()
{
	int no,r1,r2,r3,r4,r5;
	printf("enter a five digit number =");
	scanf("%d",&no);
	int sum,rev,q1,q2,q3;
	r1=no%10;
	q1=no/10;
	r2=q1%10;
	q2=q1/10;
	r3=q2%10;
	q3=q2/10;
	r4=q3%10;
	r5=q3/10;
	sum=r1+r2+r3+r4+r5;
	rev=r1*10000+r2*1000+r3*100+r4*10+r5;
	printf("%d\n%d\n",sum,rev);
//	printf("%d\n%d\n%d\n%d\n%d\n",r1,r2,r3,r4,r5);
	if(no==rev)
		printf("enter number is palindrom");
	else 
		printf("enter number is not palindrom");
	
	
}