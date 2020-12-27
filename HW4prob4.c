// HW4prob4
//SHIV SUBEDI (CS 5900)
#include <stdio.h>
#include <math.h>
int main ()
{
	char res;
	double h, w, hat_size, jacket1, jacket2, n, q, x, waist1, waist2;
	int age, p, y;
	printf ("Enter 'y' if you know your height and weight, else get your measurements before\n\n");
	printf("Do you know your height, weight?");
	scanf (" %c", &res);
	while (res =='y')
	{
	printf ("\nEnter the user's height (in inches):");
	scanf ("%lf", &h);
	printf ("Enter the user's weight (in pounds):");
	scanf ("%lf", &w);
	printf ("Enter the user's age (in years):");
	scanf ("%d", &age);
	hat_size = (w*2.9)/h;
	printf ("\nYour hat size is: %.2f inches\n", hat_size);
		if (age>30)
	{
		n= (age-30)*(1/10.0);
		p=(int)n;
		jacket1= (h*w)*(1/288.0);
		jacket2 = (jacket1 + p*(1/8.0));
		printf ("Your jacket size is: %.2f inches\n", jacket2);
	}
	else
	{
		jacket1= (h*w)/288;
		jacket2 = jacket1;
		printf ("Your jacket size is: %.2f inches\n", jacket2);
	}
		if (age>28)
	{
		x= (age-28)*(1/2.0);
		y=(int)x;
		waist1= w*(1/5.7);
		waist2 = (waist1 + y*(1/10.0));
		printf ("Your waist size is: %.2f inches\n", waist2);
	}
	else
	{
		waist1= w*(1/5.7);
		waist2 = waist1;
		printf ("Your waist size is: %.2f inches\n", waist2);
	}
	printf ("\n\nWOULD YOU LIKE TO CONTINUE:");
	scanf (" %c", &res);
	
		
	}


	
return 0;
}
