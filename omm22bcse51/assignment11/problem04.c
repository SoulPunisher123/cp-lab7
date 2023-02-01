//WAP TP FIND THE GREATEST AND THE SMALLEST ELEMENT PRESENT IN MATRIX.
#include<stdio.h>
#define MAX_SIZE 100
int main()
{
	int arr[MAX_SIZE];
	int i,max,min,r,c;
	printf("enter the rows of matrix:");
	scanf("%d",&r);
	printf("enter the columns of matrix:");
	scanf("%d",&c);

	int size=r*c;
	printf("enter elements in the matrix:\n");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for (i=1;i<size;i++){
		if (arr[i]>max){
		
		max=arr[i];
	}
		if (arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("max element= %d\n",max);
	printf("min element= %d\n",min);
	return 0;
}

