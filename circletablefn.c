//circletable fornext
#include <stdio.h>
# define PI 3.1416
int main ()
{
	double r,dia, area, circum;
	int count;
	r= 4.5;
	for ( count =0; count<5; count++) //remember ; here
	{
		dia= 2*r;
		circum= 2*PI*r;
		area= PI*r*r;
		printf ("\nR=%.2f, dia=%.2f, circum= %.2f, area= %.2f\n", r, dia, circum, area);
		r=r+.5;
	}; //; optional here
	return 0;
	
	
}
