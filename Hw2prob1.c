// area of the lawn
// Shiv Subedi (CS 5900)
#include <stdio.h>
int main ()
{
	double length, width;
	double length2, width2, area, area2, area3;
	printf ("Enter the length of the rectangular garden in cm:");
	scanf ("%lf", &length);
	printf ("Enter the width of the rectangular garden in cm:");
	scanf ("%lf", & width);
	area = length * width;
	printf ("The area of the rectangular garden is: %.3f cm^2\n", area);
	length2= (length+6);
	width2= (width+3);
	area2= length2*width2;
	printf ("\nThe total area of garden with sidewalk is: %.3f cm^2\n", area2);
	area3= area2=area;
	printf ("\nThe total area of the sidewalk is: %.3f cm^2", area3);
	return 0;
}
