// cost of call
// Shiv Subedi (CS 5900)
#include <stdio.h>
#include <string.h>
int main ()
{
double time, length, cost;
char day [7]; //total no of days is to be provided else it won't compile	
printf (" Enter the day of the call (all in lower letters):");
scanf ("%s", &day);
printf ("Enter the time of call in 24 hours format:");
scanf ("%lf", &time);
printf ("Enter the length of the call:");
scanf ("%lf", &length);
if (((strcmp(day, "monday")==0) || (strcmp(day, "tuesday")==0)|| (strcmp(day, "wednesday")==0)|| (strcmp(day, "thursday")==0)|| (strcmp(day, "friday")==0)) && ((time>8) && (time<18)) )
{
cost=.35*length;
printf (" The cost of your total call for %f minutes is: $ %f", length, cost);
}
else if (((strcmp(day, "monday")==0) || (strcmp(day, "tuesday")==0)|| (strcmp(day, "wednesday")==0)|| (strcmp(day, "thursday")==0)|| (strcmp(day, "friday")==0)) && ((time>=18) && (time<=8)) )
{
cost=.22*length;
printf (" The cost of your total call for %.3f minutes is: $ %.3f", length, cost);
}
else 
{
cost = .10*length;
printf (" The cost of your total call for %f minutes is: $ %f", length, cost);
}
return 0;	
}
