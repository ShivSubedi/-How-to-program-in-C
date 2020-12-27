// circle using do-while
#include <stdio.h>
# define PI 3.1415
int main ()
{
	double r;
	double dia, circum, area;
	//int count;
	r= 4.5;
	do
	{ 
	//r= 4.5; cannot be done here as it repeats the same value infinite times
	dia= 2*r;
	circum= 2*PI*r;
	area= PI*r*r;
	printf (" R=%.2f, Dia=%.2f, cir=%.2f, Area= %.2f\n", r, dia, circum, area);
	r= r +.5;
	} while (r<6.0);
	return 0;
	
}

