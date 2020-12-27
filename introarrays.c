//intd to arrays
#include <stdio.h>
int main ()
{
	int num[6]; //Role of 6 here?
	int i, max;
	double sum = 0.0, average = 0.0;
	printf ("How many scores?");
	scanf ("%d", &max);
	for (i=0; i < max; i++)
	{
		printf ("Enter the value to add:");
		scanf ("%d", &num[i]);
		sum = sum + num[i];
	}
	average = (sum/max);
	printf ("\nDisplaying the Array contents\n\n");
	for (i=0; i<max; i++)
	printf ("%d      %d\n", i, num[i]);
	printf ("Average = %.3f", average);
	return 0;
}
