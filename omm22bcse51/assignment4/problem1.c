//WAP to find the electricity bill.
#include<stdio.h>
#include<math.h>
int main()
{
	float prevbill,units,x,y,z;
	printf("enter the previous bill:");
	scanf("%f",&prevbill);
	printf("number of units this month:");
	scanf("%f",&units);
	if (units=100)
	{
		x=(units-(units-100))*1.40;
		y=(units-100)-(units-100)*2.50;
		z=(units-200)*3.20;
		printf("your bill is %f",x+y+z+prevbill);
	}

	else if(units>100)
		printf("your bill is %f'",units*1.40+prevbill);
	return 0;
}



