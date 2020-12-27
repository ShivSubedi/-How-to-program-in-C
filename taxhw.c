//calculating property tax
#include <stdio.h>
#define tax_rate .0175
int main ()
{
	//declaring variables
	double income;
	double tax;
	printf ("Enter your property value:");
	scanf ("%lf", &income);
	tax= income*tax_rate;
	printf ("Your total tax for property value of %.3f is: %.3f", income, tax);
	return 0;
}
