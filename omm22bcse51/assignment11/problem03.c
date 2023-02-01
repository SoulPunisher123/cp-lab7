//WAP TO SWAP TWO ROWS IN A GIVEN MATRIX.
#include<stdio.h>
void main()
{
	int array1[10][10],array2[10][10];
	int i,j,m,n,a,b,c,p,q,r;
	printf("enter the order of the matrix:\n");
	scanf("%d %d",&m,&n);
	printf("enter the coefficient of the matrix:\n");
	for (i=0;i<m;++i){
		for (j=0;j<n;++j){
			scanf("%d",&array1[i][j]);
			array2[i][j]=array1[i][j];
		}
	}
	printf("enter the number of two rows to be exchanged:\n");
	scanf("%d %d",&a,&b);
	for (i=0;i<m;++i){
		c=array1[a-1][i];
		array1[a-1][i]=array2[b-1][i];
		array2[b-1][i]=c;
	}
	printf("the matrix after interchanging the rows c in the original matrix\n");
	for (i=0;i<m;++i){
		for (j=0;j<n;++j){
			printf("%d",array1[i][j]);
		}
		printf("\n");
	}
}


			



