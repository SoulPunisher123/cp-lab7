//WAP to compute the sum of series 1+7+7^2+7^3+...+nth.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum=0,i=1;
	printf("enter the value:");
	scanf("%d",&num);

        while (i<=num)
	{
		sum=sum+pow(7,i);
		i++;
	}
	printf("the sum of the series is %d",sum);


	return 0;
}


