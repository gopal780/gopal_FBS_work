#include<stdio.h>
void main() {
	int no,rem=0,sum=0;
	printf("entera number to check its armstrong of no=");
	scanf("%d",&no);
	int i=no,temp=no,count=0;
	while(no>0) {
		rem=no%10;
		sum=sum+rem*rem*rem;
		no=no/10;
		count++;
	}
	printf("count of number %d\n",count);
	if(sum==temp)
		printf("number is armstrong");
	else
		printf("number is not armstrong");
}