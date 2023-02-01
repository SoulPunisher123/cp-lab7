//evaluate the following expression
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter 4 numbers:");
	scanf("%d%d%d%d",&a,&b,&c,&d);
        
	float x=(a-b)/(c-d);
	if (c!=d)
		printf("x is %f",x);
	else

		printf("ERROR!!!");
	return 0;
}

