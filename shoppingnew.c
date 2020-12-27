// Kroger shopping
#include <stdio.h>
int main ()
{
	int qty, count = 0;
	double price, itemcost, total = 0.0;
	char item[20];
	price = 1.0;
	while (price > 0.0)
	{
		printf ("Enter price: $");
		scanf ("%lf", &price);
		if (price <= 0.0)
		break;
		printf ("Enter quantity:");
		scanf ("%d", &qty);
		printf ("Enter itemname:");
		scanf ("%s", item);
		itemcost = (price * qty);
		total += itemcost;
		printf ("\n Your total shopping cost = $%.3f\n", total);
		return 0;
	}
}
