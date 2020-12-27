//HW4prob3
//SHIV SUBEDI (CS5900)
#include <stdio.h>
#include <math.h>
double fee(double *hour, double rate);
double total (double tuition, double fee);
double tuition;
int main ()
{
	double h;
	char res;
	double r;
	printf ("Enter the number of hours:");
	scanf ("%lf", &h);
	if (h>15)
	{ 
	    r = 44.5;
		printf ("Your are enrolled as a full time student.\n");
		printf ("Your fee rate per hour is: $44.50\n");
		printf ("Your total fee for %.1f credit hours taken is: $%.2f\n\n", h, fee(&h,r));
    }
		
	else
	{
		r = 67.50;
		printf ("Your are enrolled as a part time student.\n");
		printf ("Your fee rate per hour is: $67.50\n");
		printf ("Your total fee for %.1f credit hours taken is: $%.2f\n\n", h, fee(&h,r));
	}
	printf ("Do you belong to this state:");
	scanf (" %c", &res);
	if (res=='y')
	{
		tuition = 1250.00;
		printf ("Your In-state tuition fee is: $1250.00");
		printf ("Total cost is: $%.2f", total(tuition, fee(&h,r)));
	}
	
	else
	{
		    tuition = 2476.80;
			printf ("Your Out-of-state tuition fee is: $2476.80\n\n");
		printf ("Total cost is: $%.2f", total(tuition, fee(&h, r)));
	}
    
	return 0; 
}
double fee(double *hour, double rate)
{
   return ((*hour)*(rate));
}
double total (double tuition, double fee)
{
	double pay;
	pay = fee + tuition;
	return (pay);
}


