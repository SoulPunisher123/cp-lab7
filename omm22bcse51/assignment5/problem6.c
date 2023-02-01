//WAP to check the given numbers is armstrong or not.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,rem,temp,sum=0;
	printf("enter the number:");
	scanf("%d",&num);

	for (temp=num;num!=0;num = num/10)
	{
		rem=num%10;
	        sum=sum+(rem*rem*rem);
	}
	if (sum == temp)
		printf("it is an armstrong number!!");
	else
		printf("it is not an armstrong number!!");
	return 0;
}


