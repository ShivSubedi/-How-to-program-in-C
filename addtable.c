// addition table
#include <stdio.h>
int main ()
{
	int row, col;
	int i, j;
	printf ("\n DISPLAYING ADDITION TABLE\n");
	printf ("\nEnter how many rows and columns?");
	scanf ("%d %d", &row, &col);
	for ( i=1; i< row; i++)
	{
		for ( j=0; j< col; j++) //try for 5, 6, j=6 is involved. How?
		printf ("%d", (i+j));
		printf ("\n"); // to move the new line after all the columns
	}
	return 0;
}
