//WAP TO CALCULATE THE GROSS SALARY OF AN EMPLOYEE BY GIVING BASIC SALARY .GROSS SALARY=BASIC+DA(60%)+HRA(15%).
#include<stdio.h>

float CGS(float basicsalary){
	float DA= basicsalary*0.6;
	float HRA= basicsalary*0.15;
	return basicsalary + DA + HRA;
}
int main()
{
	float basicsalary;
        printf("enter basic salary:");	
	scanf("%f",&basicsalary);
	float grosssalary = CGS(basicsalary);
	printf("gross salary is %.2f", grosssalary);
	return 0;
}

