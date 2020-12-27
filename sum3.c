//Sum of two numbers
#include <stdio.h>
int main ()
{
	//declare variables
	int first, second, sum;
	printf ("Enter the first number=");
	scanf ("%d", &first);
	printf ("Enter the second number=");
	scanf ("%d", &second);
	//compute sum
	sum = first + second;
	printf ("sum = %d", sum);
	return 0;
}
