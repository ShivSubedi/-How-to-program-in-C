//ordering of 3 numbers
#include <stdio.h>
void order (double *a, double *b);
int main ()
{
	double num1, num2, num3;
	printf ("Enter the three numbers separated by blanks");
	scanf ("%lf %lf %lf", &num1, &num2, &num3);
	order (&num1, &num2);
	order (&num1, &num3);
	order (&num2, &num3);
	printf ("The numbers in ascending order are: %.3f %.3f %.3f\n", num1, num2, num3);
	return 0;
}
void order(double *a, double *b)
{
	double temp;
	if (*a>*b)
	{
		temp = *a;
		*a = *b;
		*b = temp;
	}
}

