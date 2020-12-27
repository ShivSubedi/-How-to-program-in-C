# include <stdio.h>
# define TRUE 1
# define FALSE 0
int main ()
{
	int i=0, n;
	double num, score=0.0;
	int flag = FALSE;
	printf (" How many scores to enter?");
	scanf ("%d", &n);
	printf ("\n");
	if (n>0)
	{
		while ((flag != TRUE) && (i<n))
		{
			printf ("enter the test score:");
			scanf ("%lf", &num);
			score += num;
			i ++;
			if (score > 100)
			flag= TRUE;
			
		}
	}
	printf ("Sum of %d test scores = %.2f", i, score);
	return 0;
}
