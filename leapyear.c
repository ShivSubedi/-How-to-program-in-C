//leap year
#include <stdio.h>
int main ()
{
	int year;
	printf ("Enter any particular year (eg: year 2016)");
	scanf ("%d", &year);
	if (year%4==0)
	{
		if (year%100==0)
		{
			if (year%400==0)
			printf("Given year %d is not a leap year", year);
			else
			printf ("Given year %d is not a leap year", year);
		}
	
	}
	else 
	printf ("Given year %d is not a leap year", year);
	return 0;
}
