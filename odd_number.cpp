#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int i,n;
	//printf("Enter the number which you want");
	//scanf("%d",&n);
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			printf("%d",i);
		}
		count(i);
	}
	return(0);
	
}
