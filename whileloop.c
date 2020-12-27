//while loop 
#include <stdio.h>
int main ()
{
	int max, num;
	int count = 0, sum = 0;
	printf ("How many numbers do you want to add?");
	scanf ("%d", &max);
	while (count < max)
	{
		printf ("Enter a number:");
		scanf ("%d", &num);
		sum = sum + num;
		count = count + 1;
	}; //semicolon is optional here
	printf ("The sum of %d numbers is %d.", max, sum);
	return 0;
	
} 
