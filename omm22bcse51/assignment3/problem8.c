//rounding a given floating point number to integer by considering the floor and ceiling operation.
#include<stdio.h>
int main()
{
	float a;
	printf("enter a floating number:");
	scanf("%f",&a);

	int c=++a;
	printf("the ceiling value is %d",c);

	return 0;
}

