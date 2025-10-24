#include <stdio.h>
int main()
{
	float salary,taxRate,tax,afterTaxSalary;
	printf("Enter the salary:");
	scanf("%f",&salary);
	printf("Enter the Tax Rate:");
	scanf("%f",&taxRate);
	
	tax = salary*(taxRate/100);
	afterTaxSalary = salary - tax;
	
	printf("Salary: %.2f\n",salary);
	printf("Tax: %.2f\n",tax);
	printf("After Tax Salary: %.2f\n",afterTaxSalary);
	 


}
