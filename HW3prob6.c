// finding the speed of sound
//SHIV SUBEDI (CS5900)
#include <stdio.h>
int main ()
{
	double a, speed, temp;
	printf ("Enter the temperature:");
	scanf ("%lf", &temp);
	a= sqrt(((5*temp)+297)/247.0);
	speed= 1086*a;
	printf ("The speed of sound at a given temperature of %.3f is: %.3f", temp, speed);
	return 0;
	
}
