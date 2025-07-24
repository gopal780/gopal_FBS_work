#include<stdio.h>
void main() {
	int a,pass,exit,flag=1;
	printf("enter a number a number ");
	scanf("%d",&a);
	while(flag) {
		printf("menu\n");
		printf("to check number is even or odd press 1\n");
		printf("to check number is prime or not press 2\n");
		printf("to check number is palindrome or not press 3\n");
		printf("to check number is positive negetive or zero press 4\n");
		printf("to reverse a number 5\n");
		printf("to find the sum of number 6\n");
		printf("\nenter your choise =");
		scanf("%d",&pass);


		if(pass==1) {
			if(a%2==0)
				printf("number is even ");
			else
				printf("number is odd");
		} else



			if(pass==2) {
				int j, i, flag;
				for(j = 2; j <= a; j++) {
					flag = 1;
					for(i = 2; i <= a/2; i++) {
						if(a % i == 0) {
							flag = 0;
							break;
						}
					}
				}
				if(flag == 1)
					printf("number is not prime");
				else
					printf("number is prime");

			} else if (pass==3) {

				int no=a,rev=0,r;
				int temp=no;
				while (no>0) {
					r=no%10;
					no=no/10;
					rev=rev*10+r;
				}
				if(temp==rev)
					printf("number is palindorme");
				else
					printf("numberis not palindrome");
			} else

				if(pass==4) {

					int no=a;
					if(no>0)
						printf("number is positive");
					else if(no==0)
						printf("number is neutral");
					else
						printf("number is negetive");
				} else

					if(pass==5) {
						int no=a,r,rev=0;
						while (no>0) {
							r=no%10;
							no=no/10;
							rev=rev*10+r;
						}
						printf("reverse number is %d",rev);
					} else if(pass==6) {
						int no=a,r,sum=0;
						int i=0;
						while(i<a) {
							r=no%10;
							no=no/10;
							sum=sum+r;
							i++;
						}
						printf("sum of number is %d",sum);

					} else
						printf("invalid choice");
					printf("\npress 1for repeat\n");
					printf("press 0 for exit");
					scanf("%d",&flag);
	}
}