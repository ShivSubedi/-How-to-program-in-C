// kroger shopping
// Non - modular program with array
#include <stdio.h>
#define n 10
int main ()
{
	int k, qty[n], i=0;
	double price[n], itemcost[n], total = 0.0;
	char item[n][20];
	price[0] = 1.0;
	while (price[i] > 0.0)
	{
		printf ("\nEnter price: $");
		scanf ("%lf", &price[i]);
		if (price[i]<= 0.0)
		break;
		printf ("Enter quantity:");
		scanf ("%d", &qty[i]);
		printf ("Enter itemname:");
		scanf ("%s", item[i]);
		itemcost[i]= (price[i]*qty[i]);
		total += itemcost[i];
		i++;
	}
	return 0;
}
