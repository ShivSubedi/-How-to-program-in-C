//WAGE
# include <stdio.h>
# define Max 40
# define OT 1.5
int main ()
{
	int hours;
	double wage;
	double weekpay;
	printf (" Enter the hours worked:");
	scanf ("%d", &hours);
	printf (" Enter the hourly wage:");
	scanf ("%lf", &wage);
	if (hours <= Max)
	{
		weekpay = (hours * wage);
	printf (" Weekly pay = %.2f", weekpay);
	}
	else
	{
	weekpay = (Max*wage)+ OT* (hours- Max)* wage;
	printf ("Weekly pay with OT benefit= %.2f", weekpay);
	}
	return 0;

}
