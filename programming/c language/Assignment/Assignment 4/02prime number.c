#include<stdio.h>
void main()
{
	int a;
	printf("enter a number to check number is prime or not =");
	scanf("%d",&a);
    int j, i, flag;
    for(j = 2; j <= a; j++)
    {
        flag = 1;
        for(i = 2; i <= j/2; i++)
        {
            if(j % i == 0)
            {
                flag = 0; 
                break;
            }
        }
        if(flag == 1)
            printf("%d ", j);
    }
}