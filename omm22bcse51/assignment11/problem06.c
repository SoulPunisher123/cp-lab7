#include<stdio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("enter no. of rows for 1st matrix:\n");
	scanf("%d",&r1);
	printf("enter no. of rows for 2nd matrix:\n");
	scanf("%d",&r2);
	printf("enter no. of columns for 1st matrix:\n");
	scanf("%d",&c1);
	printf("enter no. of columns for 2nd matrix:\n");
	scanf("%d",&c2);
	if (c1!=r2)
	{
		printf("matrices can't be multiplied!!!");
	}
	else 
	{
		int m1[r1][c1],m2[r2][c2];
		printf("enter the 1st matrix elements:\n");
		for (int i=0;i<r1;i++){
			for (int j=0;j<c1;j++){
				scanf("%d",&m1[i][j]);
			}


