// weather and driving
#include <stdio.h>
int main ()
{
	char weather;
	double temp;
	printf ("Input S for Sunny, R for rainy, I for Icy\n");
	printf ("\nHow is the weather like today?");
	scanf (" %c", &weather);
	
	if (weather=='S')
	printf ("Do enjoy the driving!");
	else
	{
		printf (" What is the current temperature?");
	scanf ("%lf", &temp);
	if (temp>=35)
	printf (" Roads may be flooded outside, drive with caution!");
	else
	printf (" Roads may be icy outside, drive with most caution!");
	}
	return 0;
	
	
}
