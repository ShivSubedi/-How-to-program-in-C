#include <stdio.h>
double total_cost (int number_par, double price_par);
int main ()
{
	double price, bill;
	int number;
	printf ("Enter the number of items purchased:");
	scanf ("%d", &number);
	printf ("Enter the price per item $");
	scanf ("%lf", &price);
	bill= total_cost(number, price); //our initial declared variable (total_cost) should include the local variables (number, price)
	printf ("Final bill, including tax is $%.3f", bill);
	return 0;
}
double total_cost (int number_par, double price_par)
{
const double TAX_RATE= 0.05; //declaration of a const
double subtotal;
subtotal = price_par*number_par;
return (subtotal + subtotal*TAX_RATE);
	
}




