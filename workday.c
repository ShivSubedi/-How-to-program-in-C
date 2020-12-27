// work day classification
# include <stdio.h>
int main()
{
	char day;
	printf ("\n Enter S for Saturday and U for Sunday\n");
	printf (" What is the day today?");
	scanf ("%c", &day);
	if ((day =='S') || (day =='U'))
	printf (" Weekend");
	else
	printf (" Workday");
	return 0;
}
