//status clsssification//
# include <stdio.h>
int main ()
{
	int crh;
	printf ("Enter your total credit hours:");
	scanf ("%d", &crh);
	if ((crh > 0) && (crh <=32))
	printf (" Freshman");
	else if ((crh >32) && (crh <65))
	printf ("Sophomore");
	else if ((crh >= 65) && (crh < 92))
	printf ("Junior");
	else 
	printf ("Senior");
	return 0;
}
