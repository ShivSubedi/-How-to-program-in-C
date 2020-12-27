# include <stdio.h>
int main ()
{
	int i=0, num;
	double sum =0.0, average = 0.0;
	char res = 'y';
	printf (" Would you like to add numbers?");
	scanf (" %c", & res);
	while (res == 'y')
	{
		printf ("Enter the test score:");
		scanf ("%d", &num);
		//sum += num;
		//i++;
		printf (" Would you like to add another scores?");
		scanf (" %c", &res);
	}
	average = (sum/i);
	printf (" \nThe sum of %d numbers is %.3f\n", i, sum);
	printf (" \nAverage test score %d numbers is %.3f", i, average);
	return 0;
}
