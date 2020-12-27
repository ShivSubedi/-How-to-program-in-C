//SHIV SUBEDI (CS 5900)
// Final Prob1 (using while loop)
#include <stdio.h>
int main ()
{
	double x;
	int exp, exp1;
	double value = 1.0;
	printf ("Enter the real value of X:");
	scanf ("%lf", &x);
	printf ("Enter the exponent value:");
	scanf ("%d", &exp);
	exp1=exp;
	if (exp>0)
	{
		while (exp!=0)
		{
			value=value*x;
			exp= exp - 1;
		}
		printf ("%.2f raised to the power %d = %.2f", x, exp1, value);
		
	}
	else
	printf ("You have entered a negative exponetial value! Enter a positive value for exponent.");
	return 0;
}
