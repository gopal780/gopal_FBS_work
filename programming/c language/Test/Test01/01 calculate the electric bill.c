#include<stdio.h>
void main()
{
	int unit,cost;
	printf("enter a unit =");
	scanf("%d",&unit);
	if(unit<50)
	{
		cost=unit*30;

	}
	else if(unit>51||unit<=150)
	{
			cost=unit*40;
		}
		else
			cost=unit*50;
	printf("%d",cost);
			
}