//Shiv Subedi
//This program is written to classify weekend vs work day for user input of day 
// work day classification
# include <stdio.h>
int main()
{
	char day;
	printf ("\n Enter S for Saturday and U for Sunday\n");
	printf (" What is the day today?");
	scanf ("%c", &day);
	if ((toupper(day)=='S') || (tolower(day)=='u'))
	printf (" Weekend");
	else
	printf (" Workday");
	return 0;
}
