//estimating temperature in the freezer
#include <stdio.h>
#include <math.h>
# define mins_hr 60.0
int main ()
{
	//declaring variables
	int hour, mins;
	double thour, temp;
	printf (" NB: If the time elapse since power supply is for instance 5 hours and 20 mins\n");
	printf ("\nEnter how much hours has it been since power failure:");
	scanf ("%d", &hour);
	printf ("\nEnter how much minutes has it been since power failure:");
	scanf ("%d", &mins);
	thour = hour + mins/mins_hr;
	printf (" \nTotal hours since power failure is: %.3f hours\n", thour);
	temp = (4*pow(thour,2))/(thour+2) -20;
	printf (" \nThe current temperature in the freezer is: %.3f degree celsius", temp);
	
	return 0;
}
