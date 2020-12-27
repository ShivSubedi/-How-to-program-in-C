// kroger shopping
#include <stdio.h>
int main ()
{
	int count =0, max, qty;
    double price, item_cost, total =0;
    char item [25];
	printf ("How many items purchased?");
	scanf ("%d", &max);
	while (count<= max)
	{
		printf ("Enter the item name:");
		scanf ("%s", &item);
		
		printf ("Enter the item price:");
		scanf ("%lf", &price);
		
		printf ("Enter the quantity:");
		scanf ("%d", &qty);
		
		item_cost= price*qty;
		total= total + item_cost;
		
		printf ("\n $%.2f \t %.2d \t $%.2f \t $%.2f\n\n", price, qty, item_cost, total);
		count= count + 1;
		
	}
	printf ("your total purchase today is %.2f", total);
	return 0;
}

