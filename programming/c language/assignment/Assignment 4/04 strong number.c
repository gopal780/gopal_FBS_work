#include<stdio.h>
void main() {
	int a;
	printf("enter a number to check number is strong or not ");
	scanf("%d",&a);
	for(int j=0; j<=a; j++) {

		int n=j,fact=1,sum=0,i=1;
		int temp=n,digit;
		while(temp>0) {
			digit=temp%10;

			fact=1,i=1;
			while(i<=digit) 
			{
				fact=fact*i;
				i++;
			}

			sum+=fact;

			temp=temp/10;

		}
		if(n==sum)
			printf("%d is a strong number\n",j);


	}
}
