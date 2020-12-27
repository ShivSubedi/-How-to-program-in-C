//walmart shopping
#include <stdio.h>
int main ()
{
	int i, n;
	double total = 0.0;
	int qty[]= {4, 2, 3, 4, 3};
	double price [] = {1.98, 1.99, 1.29, 4.49, 0.57};
	n = sizeof(qty)/ sizeof (qty[0]);
	printf ("Max number of elements = %d", n);
	double cost [n];
	printf ("\n Wal-Mart Shopping \n\n");
	printf ("Qty     Price     Itemcost\n\n");
	for (i=0; i < n; i++)
	{
		cost[i] = qty[i] * price[i];
		total += cost[i];
		printf ("%d         %.2f          %.2f \n", qty[i], price[i], cost[i]);
	}
	printf ("\nTotal cost = $%.3f\n", total);
	return 0;
}
