//print the following for n,for n=5:1 1 1 1 1
#include<stdio.h>
int main()
{	
	int i,j,s;
	for (i=1;i<=5;i++)
	{	
		for (j=5;j>=i;j--)
			printf("%d",i);
		
		for (s=0;s<=i;s++)
			printf(" ");
		printf("\n");
	}
	return 0;

}



       			

