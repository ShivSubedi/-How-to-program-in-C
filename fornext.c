// for next loop
#include <stdio.h>
int main ()
{
	int max, num;
	int count, sum=0;
	printf ("How many numbers do you want to add?");
	scanf ("%d", &max);
	for (count = 0; count < max; count = count+1) // can also write count++
	{
		printf("Enter a number:");
		scanf ("%d", &num);
		sum= sum+ num;
	}; // semicolon seems optional here
	printf (" The sum of %d numbers you entered is %d", max, sum);
	return 0;
}
