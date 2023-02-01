//check the validity of triangle is 3 sides are given.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides:");
	scanf("%d%d%d",&a,&b,&c);
	if ((a*a)+(b*b)==(c*c))
		printf("yes!! the traingle is valid");
	else
		printf("no!! the triangle is not valid");
	return 0;
}

