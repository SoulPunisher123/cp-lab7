//take 2 numbers and find their sum and average.
#include<stdio.h>
int main()
{
	{
		int x,y;
		printf("enter the 1st number");
		scanf("%d",&x);

		printf("enter the 2nd number");
		scanf("%d",&y);
		
		int sum=x+y;
		printf("sum is %d",sum);

		float average=(x+y)/2;
		printf("average is %f",average);

		return 0;
	}
}

