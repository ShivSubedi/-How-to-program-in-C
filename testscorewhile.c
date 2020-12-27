// sum of test scores using while
# include <stdio.h>
int main ()
{
	int max, count=0;
	double score, average, sum=0;
	printf (" How many scores do you want to enter?");
	scanf ("%d", &max);
	while (count < max)
	{
		printf ("Enter the test score:");
		scanf ("%lf", & score);
		sum= sum + score;
		count= count +1;
	
	}
	printf ("The sum of %d test scores is %.3f\n", max, sum);
	average= sum/max;
	printf ("\nThe average of %d test scores is %.3f", max, average);
	return 0;
	
}
