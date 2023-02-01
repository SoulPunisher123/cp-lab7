//WAP to find the max,min,avg of an array.
#include<stdio.h>
int main()
{
	int arr[8],i,l,g,s=0;
	float avg;
	printf("enter 8 numbers:\n");
	for (i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
		s=s+arr[i];
		avg=s/8.0;
	}
	printf("average of the array is %f \n",avg);
	g=arr[0];
	for (i=0;i<8;i++)
		if (arr[i]>g)
			g=arr[i];
			printf("greatest number is %d \n",g);
	l=arr[0];
	for (i=0;i<8;i++)
		if (arr[i]<l)
			l=arr[i];
			printf("lowest number is %d \n",l);
	return 0;
}

