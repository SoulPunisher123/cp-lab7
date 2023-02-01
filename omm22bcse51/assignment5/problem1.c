//WAP to calculate 1+2+3+4....+n
#include<stdio.h>
int main()
{
	int num,sum=0,i=1;
	printf("enter the value:");
	scanf("%d",&num);
	
	while(i<=num)
        {  
	        sum=sum+i;
		i++;
	}
        printf("the sum is %d\n",sum);	
	
	return 0;
}

	     
