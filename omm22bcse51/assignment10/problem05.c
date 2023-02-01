//WAP TO FIND WHETHER A NUMBER IS PRIME OR NOT.
#include<stdio.h>

void primeornot(int n);
int main()
{
	int n;
	printf("enter any number:");
	scanf("%d",&n);
	primeornot(n);
	return 0;
}

void primeornot(int n)
{
	if (n%1==0 && n%n==0)
	{
		printf("%d is a prime number!!!",n);
	}
	else
	{
		printf("%d is a composite number!!!",n);
	}
}

