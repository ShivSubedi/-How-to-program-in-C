//Diameter, Area, Parameer of circle
#include <stdio.h>
#include <math.h>
#define PI 3.142
int main()
{
	//declare variables
	int radius, diameter;
	double circum, area, perimeter;
	printf ("Enter the radius:");
	scanf ("%d", &radius);
	//finding diameter
	diameter = 2* radius;
	printf ("Diameter = %d", diameter);
	//finding circumference
	circum = 2* PI * radius;
	printf (" Circumference=%f", circum);
	//finding area
	area= PI*pow(radius,2);
	printf ("Area=%f", area);
	return 0;
	
}
