#include <stdio.h>
int main ()
{
	int row, col;
	int i, j;
	printf ("\n DISPLAYING MULTIPLICATION TABLE\n");
	printf ("\nEnter how many rows and columns?");
	scanf ("%d %d", &row, &col);
	for ( i=1; i< row; i++)
	{
		for ( j=1; j< col; j++) //i=0, j=0 are useless here, start with 1 for both
		printf ("%d\t", (i*j));
		printf ("\n"); // to move the new line after all the columns
	}
	return 0;
}
