//Hawaiian Tourism Board Average Temperature
//SHIV SUBEDI (CS 5900)
#include <stdio.h>
int main ()
{   
    int count=1;
    double temp, sum, average;
	while (count<=10)
	{
	printf ("Enter the temperature: "); // How to display first, second... days?
	scanf ( "%lf", &temp);
	sum= sum+temp;
	count= count +1;
	}
	printf ("\nThe sum of temperatures of 10 days is: %.3f\n", sum);
	average= (sum)/10;
	printf ("\nThe average of the temperatures of 10 days is: %.3f\n", average);
	
	
	
}
