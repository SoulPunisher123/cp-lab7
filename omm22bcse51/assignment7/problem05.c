//WAP TO FIND THE ODD NUMBER,EVEN NUMBER,POSITIVE NUMBERS,NEGaTive numbers.
#include<stdio.h>
int main()
{
	int a[4],i;
	printf("enter four elements:\n");
	for (i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<4;i++)
	{	
		if (a[i]%2==0)
			
		       printf("even numbers are:[%d] \n",i);
		else
			
			printf("odd numbers are:[%d] \n",i);
	}
	
	for (i=0;i<4;i++)
	{
		if (a[i]>0)
			
			printf("positive numbers are:[%d] \n",i);
		else
		      		
			printf("negative numbers are:[%d] \n",i);	
	}
	return 0;
	
}

