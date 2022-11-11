#include<stdio.h>
int a=10;
int* ptr=&a;
void main()
{
	printf("integer value %d\n",ptr);
	printf("pointer variable %d \n", *ptr);
}

