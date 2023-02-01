//WAP to compute the roots of a equation ax2+bx+c=0.
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D,x1,x2;
	printf("enter the consatnts a,b,c:");
        scanf("%d %d %d",&a,&b,&c);
        D=((b*b)-4*a*c);
	printf("D is %d",D);
        if (a==b&&b==0)
		printf("equation is invalid!!!");
	else{
		if(D>0)
		{
			x1=(-b+sqrt(D))/2*a;
			printf("x1 is %d",x1);
			x2=(-b-sqrt(D))/2*a;
			printf("x2 is %d",x2);
		}
		if(D<0)
			printf("there is no real root");
		if(D=0)
			
		        printf("there is only one root");
	    }
        return 0;
}




        

