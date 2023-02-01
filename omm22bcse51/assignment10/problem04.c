//WAP TO FIND THE POWER OF A NUMBER FOR BOTH POSITIVE AND NEGATIVE POWERS.
#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2;

	printf("enter base amd power:");
	scanf("%d %d",&num1,&num2);

	printf("Result = %.2f",pow(num1,num2));

	return 0;
}

