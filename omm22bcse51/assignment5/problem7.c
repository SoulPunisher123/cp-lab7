//WAP to test whether a number is prime or not.
#include<stdio.h>
int main()
{
	int num,c=0,i=1;
	printf("enter the number:");
	scanf("%d",&num);

	while (i<=num)
	{
		if (num%10==0)
			c++;
			i++;
	}
	if (c==0)
		printf("not a prime number!!");
	else 
		printf("a prime number!!");

	return 0;
}

		 
