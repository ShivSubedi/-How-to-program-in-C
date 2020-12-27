#include <stdio.h>
int main ()
{
	//declare variables
	int first;
	double second, sum;
	printf ("Enter the first number=");
	scanf ("%d", &first);
	printf ("Enter the second number=");
	scanf ("%lf", &second);
	//compute sum
	sum = first + second;
	printf ("sum = %.3f", sum);
	return 0;
}
