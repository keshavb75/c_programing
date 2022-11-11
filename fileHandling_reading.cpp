#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	FILE *fp;
	if((fp=fopen("C:\\Users\\Admin\\Desktop\\ram.txt","r"))==NULL)
	{
		printf("error");
		exit(1);
	}
		

	fscanf(fp,"%d",&a);
	printf("filecontaintas: %d",a);
	fclose(fp);
	return(0);
}
