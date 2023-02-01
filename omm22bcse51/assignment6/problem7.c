//write a program to print the following pattern:0 1 0 1 0   1 0 1 0   1 0 1   0 1   0
#include<stdio.h>
int main()
{
	int i,j,s;
	{
	for (i=0;i<=5;i++)
	{	
		{	for (s=0;s<=4;s++)
			printf(" ");
		}

	}
	{
	for (j=1;j>=i;j++)
		printf("%d",i);
	printf("\n");
	}
	}
	return 0;
}


