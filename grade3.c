// grade
#include <stdio.h>
int main ()
{
	char grade;
	printf ("Enter your letter grade:");
	scanf ("%c", &grade);
	if ( grade == 'A')
	printf ("Excellent");
	else if ( grade == 'B')
	printf ("good");
	else if ( grade == 'C')
	printf ("Developing");
	else if ( grade =='D')
	printf ("Poor");
	else
	printf ("Try next time");
	return 0;
}
