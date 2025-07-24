#include<stdio.h>
void main() {
	int a;
	printf("enter a nnumber ");
	scanf("%d",&a);
	for(int j=0; j<=a; j++) {
		int no=j,count=0,sum=0,rem;
		int temp=no;
		while (no>0) {
			no=no/10;
			count++;
		}
		no=temp;
		while(no>0) {
			rem=no%10;
			int res=1;
			for(int j=0; j<count; j++)
				res=res*rem;
			sum=sum+res;
			no=no/10;
		}
		if(sum==temp)
			printf("%d ",sum);
		
	}
}