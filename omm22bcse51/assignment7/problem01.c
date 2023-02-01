//wap to update particular of an array list.
#include<stdio.h>
int main()
{
	int i,t,a[10],n,m,s,j=0,b[10];
	printf("enter the limit: \n");
	scanf("%d",&n);
	printf("enter the values: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf ("given values are: \n");
	for (i=0;i<n;i++);
	{
		printf("a[%d]=%d",i,a[i]);
	}
	printf("enter the position to be updated: \n");
	scanf("%d",&t);
	printf("enter the value to be updated: \n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if (i==t)
		{
			a[i]=s;
		}
	}
	printf("updated value is : \n");
	for (i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	return 0;
}


