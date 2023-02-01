//test whether a number is palindrome or not.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a three digit number:");
	scanf("%d%d%d",&a,&b,&c);

	if(a==c)
		printf("the number is palindrome!!!");
	else
		printf("the number is not a palindrome!!!");
	return 0;
}



