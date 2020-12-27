//wages comparison
#include <stdio.h>
int main ()
{
	int salary1, sale;
	double salary2, salary3;
	printf ("Enter the expected weekly sales:");
	scanf ("%d", &sale);
	salary1= 300;
	salary2= (3.50*40)+ (.1*sale);
	salary3= (.15*sale);
	printf ("\nTotal wages in first plan is $ %d\n", salary1);
	printf ("\nTotal wages in the second plan is $%.3f\n", salary2);
	printf ("\nTotal wages in the third plan is $%.3f\n", salary3);
	if ((salary1> salary2) && (salary1> salary3))
	printf ("\nFirst plan is the best paying plan");
	else if ((salary2> salary1) && (salary2> salary3))
	printf ("\nSecond plan is the best paying plan");
	else 
	printf ("\nThird plan is the best paying plan");
	
	
	return 0;
}
