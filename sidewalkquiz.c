// Quiz Shiv Subedi
// Area of sidewalk
# include <stdio.h>
# include <math.h>
#define PI 3.1415
int main ()
{
	int size, size2;
	double radius, radius2;
	double area1, area2, area3;
	printf (" Enter the size of pool in feet:");
	scanf ("%d", &size);
	radius = (size/2.0);
	area1= PI * pow(radius,2);
	printf ("\nThe area of pool is: %.3f square feet\n", area1);
	size2= size + 8;
	radius2= (size2/2.0);
	area2= PI * pow (radius2, 2);
	printf ("\nThe total area of pool with sidewalk is: %.3f squarefeet\n", area2);
	area3= (area2-area1);
	printf ("\nThe total area of sidewalk only is: %.3f squarefeet\n", area3);
	return 0;
	
}
