#include<stdio.h>
int main()
{

	int a,b;
	char ch;
	float c;
	printf("Enter the first Number:  \n");
	scanf("%d", &a);
	
	printf("Enter the second Number: \n");
	scanf("%d", &b);
	printf("Enter the Oprator: ");
	scanf(" %c", &ch);
	c=0;
	switch(ch)
	{
		case '+':
			c=a+b;
			break;
			
		case '-':
			c=a-b;
			break;
			
		case '/':
			c=a/b;
			break;
			
		case '*':
			c=a*b;
			break;
		default :
			printf("Invalid Opration\n");
			
	}
		printf("%f", c);
return 0;
}
