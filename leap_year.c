#include<stdio.h>
void main()
{
	int yr;
	printf("enter the year");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		printf("year is leap");
	}
	else
	{
		printf("year is not leap");
	}
}
