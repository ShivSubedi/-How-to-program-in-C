// calculating total house cost
//SHIV SUBEDI (CS 5900)
#include <stdio.h>
int main ()
{
	int icost, acost, tcost, count, sicost=0, sacost=0, stcost=0;
	double tax, rate, stax=0.0;
	for (count=1; count<=5; count ++ )
	{
		printf ("\nEnter the intial house cost:");
	scanf ("%d", &icost);
	printf ("Enter the Annual Fuel cost");
	scanf("%d", &acost);
	printf ("Enter the Tax Rate:");
	scanf ("%lf", &rate);
	tcost= (icost+acost);
	printf ("The total house cost for %d year is %d\n", count, tcost);
	tax=(icost*rate);
	printf ("The total tax for your intial house cost of %d is %f\n", icost, tax);
	sicost=sicost+icost;
	sacost=sacost+acost;
	stcost=stcost+tcost;
	stax=stax+tax;
	
		}
		printf ("\nThe total tax for 5 years is: %f\n", stax);
		printf ("The total initial cost for 5 years is: %d\n", sicost);
		printf ("the total fuel cost for 5 years is: %d\n", sacost);
		printf ("The total cost of house for 5 years is: %d\n", stcost);
	return 0;
	
	
}
