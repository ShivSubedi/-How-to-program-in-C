//weight of package
#include <stdio.h>
# define ounce_metricton 35273.92
int main ()
{
	double ounce;
	double metric_ton;
	printf ("Enter the weight in ounce:");
	scanf ("%lf", &ounce);
	metric_ton = ounce/ounce_metricton;
	printf ("%f ounce is equivalent to %f metric tons.", ounce, metric_ton);
	return 0;
}
