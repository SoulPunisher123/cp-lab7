//WAP TO FIND THE COMPOUND INTEREST.
#include<stdio.h>
#include<math.h>
float ComInt(float t,float r,float p)
	{
	float ci;
	ci = p*(pow((1+r/100),t));
	return ci;
	}
int main()
{
	float ti,p,c,r,ci;
	printf("enter the p & r & ti:\n");
	scanf("%f%f%f",&p,&r,&ti);
	ci = ComInt(p,r,ti);

	printf("compound interest = %f",ci);
	return 0;
}



