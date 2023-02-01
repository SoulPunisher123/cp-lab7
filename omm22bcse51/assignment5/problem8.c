//WAP to print upto n number of fibonacci series.
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,num,i;
	printf("enter the number of times we required to find upto:");
	scanf("%d",&num);
	printf("%d %d",n1,n2);
	
	for (i=2;i<num;++i)
	{
		n3=n1+n2;
		printf("%d ",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}


