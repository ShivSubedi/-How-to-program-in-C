//Volume and TRA of right circular Cone
#include <stdio.h>
#include <math.h>
# define PI 3.1415
int main ()
{
	//declaring variables
	double radius, vertical_height, slant_height;
	double volume, surface_area;
	printf ("Enter the radius of the cone in cm:");
	scanf ("%lf", &radius);
	printf ("\nEnter the vertical height of the cone in cm:");
	scanf ("%lf", &vertical_height);
	printf ("\nEnter the slant height of the cone in cm:");
	scanf ("%lf", &slant_height);
	volume= (1.0/3)*PI*pow(radius,2)*vertical_height;
	printf ("\nVolume of the given cone is: %f cm^3\n", volume);
	surface_area= PI*pow(radius,2)+ PI*radius*slant_height;
	printf ("Surface area of the given cone is: %f cm^2", surface_area);
	return 0;
}
