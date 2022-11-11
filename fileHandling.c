#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	FILE *fp;
	fp=fopen("C:\\Users\\Admin\\Desktop\\ram.txt","w");
	if(fp==NULL)
	{
		printf("error");
		exit(1);
	}
		
	printf("enter the number\n");
	scanf("%d",&a);
	fprintf(fp,"%d",a);
	printf("%d the number is enter in the file\n", a);
	fclose(fp);
	return(0);
}
