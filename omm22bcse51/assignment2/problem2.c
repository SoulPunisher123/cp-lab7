//enetr principle,time,rate of interest and then calculate simple interest.
#include<stdio.h>
#include<math.h>
int main()
{
	float p,r,t;
	printf("enter the principle interest:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter  the time period:");
	scanf("%f",&t);
	
	float SI=(p*r*t)/100;
	printf("SI is %f",SI);

	return 0;
}

