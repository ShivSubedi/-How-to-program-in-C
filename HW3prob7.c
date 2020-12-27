//pollution level
//SHIV SUBEDI (CS 5900)
#include <stdio.h>
# define CO 1
#define HC 2
#define NO 3
#define NMHC 3
int main ()
{
	int num, odo;
	double gram;
	printf ("(1) Carbon monoxide\n");
	printf ("(2) Hydrocarbons\n");
	printf ("(3) Nitrogen oxides\n");
	printf ("(4) Nonmethane hydrocarbons\n");
	printf ("\nEnter the pollutant number:");
	scanf ("%d", &num);
	printf ("Enter number of grams emitted per mile:");
	scanf ("%lf", &gram);
	printf ("Enter odometer reading:");
	scanf ("%d", &odo);
	if (num==1)
	{
		if ((odo<50000))
		{
			if (gram<3.4)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 3.4 grams/mile.");
		}
		else
		{
			if (gram<4.2)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 4.2 grams/mile.");
		}
		
	}
	else if (num==2)
	{
		if ((odo<50000))
		{
			if (gram<0.31)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.31 grams/mile.");
		}
		else
		{
			if (gram<0.39)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.39 grams/mile.");
		}
		
	}
	else if (num==3)
	{
		if ((odo<50000))
		{
			if (gram<0.4)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.4 grams/mile.");
		}
		else
		{
			if (gram<0.5)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.5 grams/mile.");
		}
		
	}
	else
	{
		if ((odo<50000))
		{
			if (gram<0.25)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.25 grams/mile.");
		}
		else
		{
			if (gram<0.31)
			printf ("Emission hasnot exceeded the permitted level");
			else
			printf ("Emissions exceed permitted level of 0.31 grams/mile.");
		}
		
	}
	return 0;
}
