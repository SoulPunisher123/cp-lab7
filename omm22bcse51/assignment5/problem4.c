//WAP to compute factorial of a number.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,fact=1;
	printf("enter the value:");
	scanf("%d",&num);
        
	for(i=1;i<=num;i++)
	{
		fact=fact*i;
	}

	printf("the factorial of the number is %d",fact);

	return 0;
}


