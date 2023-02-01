//WAP to find the prime number within range.
#include<stdio.h>
int main()
{
	int num,i=1,c;
	printf("enter a number:");
	scanf("%d",&c);

	printf("enter the end number:");
	scanf("%d",&num);

	while (i<=num)
	{
		if (num%i==0)
		{
			c++;
			i++;
			if (c==2)
				printf("%d",num);

		}
	}
	return 0;
}


