//enter 3 sides of a triangle and check whether a triangle is valid or not. 
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of a triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c)
	{	
		printf("triangle is a valid traingle\t");
		
			 if (a==b&&b==c)
				printf("triangle is a equilateral triangle");
			 if (a==b&&b!=c)
				printf("triangle is a isosceles triangle");
			 if (a!=b&&b!=c)
				printf("triangle is a scalene triangle");
	}
	else 
		printf("triangle is not a valid triangle");
        return 0;
}


