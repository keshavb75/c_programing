#include<stdio.h>
//#include<stdlib.h>
int main()
{
	int i,n;
	printf("Enter the number which you want");
	scanf("%d",&n);
	i=1;
	do
	{
	
		printf(" %d\n",n*i);
		i++;
	}while(i<=10);
	return(0);
	
}
