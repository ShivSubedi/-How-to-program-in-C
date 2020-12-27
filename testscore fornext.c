// sum of test scores using fornext
# include <stdio.h>
int main ()
{
	int max, count=0;
	double score, average, sum=0;
	printf (" How many scores do you want to enter?");
	scanf ("%d", &max);
	for (count=0; count < max; count++)
	{
		printf ("Enter the test score:");
		scanf ("%lf", & score);
		sum= sum + score;
	
	}
	printf ("The sum of %d test scores is %.3f\n", max, sum);
	average= sum/max;
	printf ("\nThe average of %d test scores is %.3f", max, average);
	return 0;
	
}
