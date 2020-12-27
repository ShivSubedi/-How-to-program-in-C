//finding the sum of squares of first n natural numbers
// SHIV SUBEDI (CS5900)
#include <stdio.h>
int main ()
{
	int sum=0, count, z, num;
	printf ("Input a number:");
	scanf ("%d", &num);
	for (count=0; count<=num; count++)
	{
		z=pow(count,2);
	    sum=sum+z;
	}
	printf ("The sum of first %d natural numbers is: %d", num, sum);
	
	
	
}
