//WAP TO FIND THE FACTORIAL OF A NUMBER USING USER DEFINED FUNCTIONS.
#include<stdio.h>
#include<math.h>
int fact();
int main()
{
	printf("enter a number to find factorial:");
	printf("\nfactorial of a given number is :%d",fact());
	return 0;
}
	int fact()
{
	int i,fact=1,n;
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

