//WAP that will read the values of a,b,c,d,m,n and find the values of x1 and x2.
#include<stdio.h>
int main()
{
	int a,b,c,d,m,n,x1,x2;
	printf("enter the value of constants:");
        scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&m,&n);
        
	if(a*d-c*b!=0)
	{
		printf("x1 is %d",x1=((m*d-b*n)/(a*d-b*c)));
		printf("x2 is %d",x2=((n*a-m*c)/(a*d-b*c)));
	}
	else
		printf("equation is invalid");

	return 0;
}

