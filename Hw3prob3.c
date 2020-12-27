//odd and even numbers
// SHIV SUBEDI (CS 5900)
#include <stdio.h>
int main ()
{
	int count=1, max, num;
	int even=0, odd=0;
	printf ("How many numbers do you want to enter?");
	scanf ("%d", &max);
	do
	{
		printf ("\nEnter a number:");
	scanf ("%d", &num);
	if ((num%2)==0)
	{
	printf ("It is an EVEN number\n");
	even=even+1;
	}
	else
	{
	printf ("\nIt is a ODD number\n");
    odd= odd+1;
	}
    
    count= count+1;
		}
		 while (count<=max);
		 
		 printf ("\nTotal number of EVEN numbers is: %d\n", even);
		 printf ("\nTotal number of ODD  numbers is: %d\n", odd);
		
	
    
}
