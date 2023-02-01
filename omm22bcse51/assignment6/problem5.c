//WAP TO PRINT THE FOLLOWING PATTERN:=A B C D C B A
#include<stdio.h>
int main()
{
	
	int ch='A';
	int i,j,k,m;
	for (i=1;i<=5;i++)
	{
		for (j=5;j>=i;j--)
			printf(" ");
		for (k=1;k<=i;k++)
			printf("%c",ch++);
			ch--;

		for (m=1;m<i;m++)
			printf("%c",--ch);
		printf("\n");
	}
	return 0;
}























































































































