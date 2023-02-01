//WAP TO PRINT THE NUMBER OF DAYS OF A MONTH IF A MONTH NUMBER AND YEAR IS GIVEN.
#include<stdio.h>

int a[12]={31,28,30,31,30,31,30,31,30,31,30,31};

void daysinmonths(int m);
int main()
{
	int m;
	printf("enter any month:");

	scanf("%d",&m);

	daysinmonths(m);
	return 0;
}
	
	void daysinmonths(int m)
{
	if (m<1 || m>12)
	{
		printf ("invalid input!!!!!!!!");
	}
	else if (m==2)
	{
		printf("no. of days in month 2 is 28 or 29");
	}
	else 
		printf("no. of days in month %d is %d",m,a[m-1]);

}
