#include <stdio.h>
#include <math.h>
# define PI 3.1415
int main ()
{
	int r;
	double area, circum;
	printf ("Enter a value for radius:");
	scanf ("%d", &r);
	circum = 2 * PI * r;
	area = PI * pow (r,2);
	printf ("\n Area of the given circle is: %.3f\n", area);
	printf ("\n Circumference of the given circle is: %.3f", circum);
	return 0;
	
}
