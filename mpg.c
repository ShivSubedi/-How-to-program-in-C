//fuel efficiency
#include <stdio.h>
int main ()
{
	double miles, gallons;
	double MPG;
	printf ("Enter the distance travelled:");
	scanf ("%lf", &miles);
	printf ("Enter the amount of gas used:");
	scanf ("%lf", &gallons);
	//compute MPG
	MPG = miles/gallons;
	printf (" The MPG of the car is = %.2f\n", MPG);
	if (MPG > 35)
	printf ("YOU HAVE A GOOD CAR!!");
	else
	printf ("IT'S TIME TO GE A NEW CAR!!");
	return 0;
}
