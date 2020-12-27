//distance conversion
# include <stdio.h>
# define km_miles 0.62137
int main ()
{
	double kilometer;
	double miles;
	double feet;
	printf ("Enter distance in kilometers:");
	scanf ("%lf", &kilometer);
     miles = kilometer* km_miles;
	feet = miles* 5280;
	printf ("%.3f Kilometers is equivalent to %.3f miles and %.3f feet", kilometer, miles, feet);
	return 0;
}
