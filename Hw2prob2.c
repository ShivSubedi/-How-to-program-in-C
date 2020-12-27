// computing distance betwween two points
// Shiv Subedi (CS 5900)
#include <stdio.h>
#include <math.h>
int main ()
{
	double x1, y1, x2, y2;
	double x, y, distance;
	// input co-ordinates for the first point
	printf ("Enter the x-coordinate of the first point:");
	scanf ("%lf", &x1);
	printf ("\nEnter the y-coordinate of the first point:");
	scanf ("%lf", &y1);
	//input co-ordinates for the second point
	printf ("\nEnter the x-coordinate of the second point:");
	scanf ("%lf", &x2);
	printf ("\nEnter the y-coordinate of the second point:");
	scanf ("%lf", &y2);
	x= x1-x2;
	y= y1-y2;
	distance = sqrt (pow(x,2)+pow(y,2));
	printf ("\nThe distance between two given points be: %.3f", distance);
	return 0;
	
	
}
