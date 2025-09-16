#include<stdio.h>
void sum();
void circle();
void degree();
void swap();
void main()
{
	sum();
	circle();
	degree();
	swap();
}

void sum()
{
	int n1,n2,add;
	printf("Enter n1 & n2:");
	scanf("%d%d",&n1,&n2);
	add=n1+n2;
	printf("Result=%d",add);
}

void circle()
{
	float pi=3.14,r,area;
	printf("\n\nEnter r:");
	scanf("%f",&r);
	area=pi*r*r;
	printf("Area of Circle=%f",area);
}

void degree()
{
	float c,f;
	printf("\n\nEnter degree celsius:");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Celsius to Farhenheit=%f",f);
}

void swap()
{
	int a,b,temp;
	printf("\n\nEnter value of a and b:");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("a=%d\n",a);
	printf("b=%d",b);	
}

