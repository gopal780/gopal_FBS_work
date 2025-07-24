//Check the given number is prime or not. Input: n = 7 Output: Prime
#include<stdio.h>
void main() {
	int no,i=0,flag=0;
	printf("enter a number =");
	scanf("%d",&no);
	for(int i=0;i<no%2;i++) {
		no=no%2;
		flag=1;
		}
		if(flag==0) {
			printf("number is  prime");
		} else
			printf("number is not prime");

}