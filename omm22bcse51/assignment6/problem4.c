//WAP to print the following pattern.
#include<stdio.h>
int  main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("%c",'A'-1 + i);
		}
		printf("\n");
	}
	return 0;
}

