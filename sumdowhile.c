//do while loop_sum of integers
# include <stdio.h>
int main ()
{
	int max, num;
	int count=0, sum=0;
printf ("How many numbers do you want to enter?");
scanf ("%d", &max);
do
{
	printf ("Enter a number:");
	scanf ("%d", &num );
	sum = sum + num;
	count = count+1;
	}
	 while (count<max);
	 printf ("\n Total sum of %d numbers is %d", max, sum);
	 return 0;	
}
