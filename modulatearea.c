//Area and perimeter of a triangle
// Modular form (call by value method)
#include <stdio.h>
int perimeter (int a, int b, int c);
double tri_area (double height, int base);
int main ()
{
	int a, b, c;
	double height;
	printf ("Enter the lengths of 3 sides of the triangle:");
	scanf (" %d %d %d", &a, &b, &c);
	printf ("Enter the vertical height:");
	scanf ("%lf", &height);
	printf ("Perimeter of the triangle = %d feet\n", perimeter (a,b,c));
	printf ("Area of the triangle = %.2f sq. feet", tri_area(height, b)); // recalling declared parameters with the variables involved
	return 0;
}
int perimeter (int a, int b, int c)
{
	return (a+b+c);
}
double tri_area (double height, int base)
{
	return ((base*height)/2.0);
}
