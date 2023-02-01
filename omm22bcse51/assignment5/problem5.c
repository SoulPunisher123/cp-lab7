//WAP to find the sum of the digit of a given number.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,sum=0;
	printf("enter the number:");
	scanf("%d",&n);

	while (n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;

	}
	printf("sum of the digit of the number is %d",sum);


	return 0;
}

		
