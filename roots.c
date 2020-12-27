//evaluating roots
#include <stdio.h>
#include <math.h>
int main ()
{
	float a, b, c;
	float discriminant, root1, root2, real, imag;
	printf ("Enter the coefficients a, b, c:");
	scanf ("%f%f%f", &a, &b, &c);
	discriminant = (pow(b,2)-4*a*c);
	if (discriminant >0)
	{
		root1 = (-b + sqrt(discriminant))/(2*a);
	root2 = (-b - sqrt (discriminant))/(2*a);
	printf ("First root = %.3f, second root= %.3f", root1, root2);
	}
	
	else if
	(discriminant == 0)
	{
		root1 = (-b)/(2*a);
	root2 = (-b)/(2*a);
	printf ("First root= %.3f, second root = %.3f", root1, root2);
	}
	else
	{

	real = (-b)/(2*a);
	imag = sqrt (-discriminant)/(2*a);
	printf ("The real root = %.3f, and the imag root = %.3fi", real, imag);
	printf ("\ni.e the roots are: %.3f+%.3fi and %.3f+%.3fi", real, imag, real, imag);
	}
	//getchar ();
	return 0;
}
