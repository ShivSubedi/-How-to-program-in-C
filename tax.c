//Tax payment
#include <stdio.h>
int main ()
{
	int gross;
	double tax;
	printf (" Enter your total income: $");
	scanf ("%d", &gross);
	if (gross <= 40000)
	tax = 0.0;
	else if ((gross >40000) && (gross <=85000))
	tax= .135 * (gross-40000);
	else
	tax= (85000-40000)*.135 + .25 * (gross -85000);
	printf (" Your gross income of $%d amounts to $%.2f in taxes!", gross, tax);
	return 0;
}
