//classify pH of a solution as neutral, acidic or alkaline
//SHIV SUBEDI (CS5900)
#include <stdio.h>
int main ()
{
	int pH;
	printf ("Enter the pH of the solution:");
	scanf ("%d", &pH);
	if (pH>7)
	{
		if (pH<12)
		printf ("The solution is ALKALINE");
		else
		printf ("The solution is VERY ALKALINE");
	}
	else
	{
		if (pH==7)
		printf ("The solution is NEUTRAL");
		else
		{
			if (pH>2)
			printf ("The solution is ACIDIC");
			else
			printf ("The solution is VERY ACIDIC");
		}
	}
	
	return 0;
}
