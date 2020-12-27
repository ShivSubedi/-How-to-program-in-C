// Quiz Shiv Subedi
# include <stdio.h>
int main ()
{
	int sales1, sales2, tsales;
	double com;
	printf (" Enter the total domestic sales in dollars:");
	scanf ("%d", &sales1);
	printf (" Enter the total International sales in dollars:");
	scanf ("%d", &sales2);
	tsales= sales1 + sales2;
	printf (" Your total sales is: $%.3d\n", tsales);
	if (tsales < 100000)
	{
		com = .03* tsales;
		printf ("\nYour total comission for the total sales of $%d is: $%.3f ", tsales, com);
	}
	else if ((tsales>=100000) && (tsales<400000))
	{
		com = 2000 + .0575 * (tsales-100000);
		printf ("\nYour total comission for the total sales of $%d is: $%.3f ", tsales, com);
	}
	else
	{
		com = 17000 + .1025 * (tsales-400000);
	printf ("\nYour total comission for the total sales of $%d is: $%.3f ", tsales, com);
	}
	
	return 0;
}
