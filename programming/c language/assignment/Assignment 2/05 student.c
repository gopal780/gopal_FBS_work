#include<stdio.h>
void main()
{
	double price;
	printf("enter the price = ");
	scanf("%lf",&price);
	fflush(stdin);
	char ch;
	printf("if your are student enter y else n=");
	scanf("%c",&ch);
	if(ch=='y')
	{
		if(price>=500)
		{
			price=price-price*0.15;
		}
		else 
		{
			price=price-price*0.10;
		}
	}
	else 
		if(price>=600)
		{
			price=price-price*0.10;
		}
		else
		{
			price=price;
		}
	printf("total price =%lf",price);
}