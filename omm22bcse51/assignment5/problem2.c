//WAP to compute the sum of square first n natural numbers.
#include<stdio.h>
#include<math.h>
int main()	
{
	int i,num,sum=0;
	printf("enter the value:");
	scanf("%d",&num);

	for (i=1;i<=num;i++)
	{
		sum=sum+pow(i,2);
	}

	printf("the sum of square of natural number is %d",sum);
	
	return 0;
}

