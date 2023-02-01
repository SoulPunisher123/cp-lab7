//find the volume of a sphere.
#include<stdio.h>
int main()
{
	
	int r;
	printf("enter the radius of the sphere:");
	scanf("%d",&r);
	float volume=(4/3)*(3.14)*(r*r*r);
	printf("volume is %f",volume);
	return 0;

}
