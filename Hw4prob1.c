#include <stdio.h>
#include <string.h>
int main ()
{
	int i, n, j;
	char name [][25]={"Ryan, Elizabeth", "McIntyre, Osborne", "DuMond, Kristin", "Larson, Lois", "Thorpe, Trinity", "Riuz, Pedro"};
char age [][4]={"62", "84", "18", "42", "15", "35"};
n= sizeof(name)/sizeof (name[0]);
	char tname[n][25], temp[25], tage[n][4];
	for (i=0; i<n; i++)
	{
		strcpy(tname[i], name[i]);
		strcpy(tage[i], age[i]);	
	}
for (i=0; i<n-1; i++)
{
	for (j=i+1; j<n; j++)
	{
		if (strcmp(name[i], name[j])>0)
		{
			strcpy(temp, name[i]);
			strcpy(name[i],name[j]);
			strcpy(name[j], temp);
			strcpy(temp, age[i]);
			strcpy (age[i], age[j]);
			strcpy (age[j], temp);
		}
		
	}
}
printf("Original list\n");
printf (".............................................\n");
for (i=0; i<n; i++)
{

printf ("%17s \t %s\n", tname[i], tage[i]);



}
printf ("Alphabetized list\n");
printf ("..............................................\n");
for (i=0; i<n; i++)
{
	printf ("%17s \t %s\n", name[i], age[i]);
	
}
return 0;

}



