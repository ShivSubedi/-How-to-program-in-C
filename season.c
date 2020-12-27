//season classification
#include <stdio.h>
#include <string.h>
int main ()
{
	//int i;
	char month [12]; //total no of months has to be provided
	printf ("Enter the current month (lower case only:)");
	scanf ("%s", month);
	if ((strcmp(month, "january")==0)|| (strcmp(month, "february")==0) || (strcmp(month, "march")==0) || (strcmp(month, "december")==0))
	printf ("WINTER SEASON", month);
	else if ((strcmp(month, "july")==0)|| (strcmp(month, "august")==0))
	printf ("SUMMER SEASON", month);
	else if ((strcmp(month, "april")==0) || (strcmp(month, "may")==0)|| (strcmp(month, "june")==0))
	printf ("SPRING SEASON", month);
	else
	printf ("FALL SEASON", month);
	return 0;
}
