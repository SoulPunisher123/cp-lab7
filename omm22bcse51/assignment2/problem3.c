//find the compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t;
	printf("enter the rate of principle:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time period:");
	scanf("%f",&t);
	
	int n;
        printf("number of times we require in a year:");
	scanf("%d",&n);

	float FV=p*pow((1+r/n),(n*t));
	printf("FV is %f",FV);

	return 0;
}

