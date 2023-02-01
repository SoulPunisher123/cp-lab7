//WAP TO CREATE AN IDENTITY MATRIX . DIAGONALS ARE 1 AND OFF DIAGONALS ARE ZERO.TAKE SIZE OF THE MATRIX.
#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10
int main()
{
	int matrix[MAXROW][MAXCOL];
	int i,j,r,c,id;
	printf("enter number of rows:");
	scanf("%d",&r);
	printf("enter number of columns:");
	scanf("%d",&c);

	

	for (i=0;i<r;i++){
		for (j=0;j<c;j++)
		{
			if (i==j)
				matrix[i][j]=1;
			else
				matrix[i][j]=0;
		}
	}
		printf("\n matrix is:\n");
		for (i=0;i<r;i++)
		{
			for (j=0;j<c;j++)
			{
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
			return 0;
}

