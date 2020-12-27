// SHIV SUBEDI (CS 5900)
// FINAL prob 1b
#include <stdio.h>
int main ()
{
	char num[20];
	int i;
	printf ("Enter the number (e.g 1996): ");
scanf ("%s", num);
printf ("Displaying the number entered in vertical form....\n");
for(i=0; num[i]!='\0'; i++)
printf ("\t%c\n", num[i]);
printf ("***END of recursive function program***");
   return 0;
	
}


