//check whether the number is both divisiblle by 11 & 13.
#include<stdio.h>
int main()
{
	int  a;
	printf("enter a number:");
	scanf("%d",&a);
	if (a%11==0)
		if (a%13==0)
			printf("the numbe ris divisible both by 11 and 13");
	else
		printf("the number is not divisible both by 11 and 13");
	return 0;
}


