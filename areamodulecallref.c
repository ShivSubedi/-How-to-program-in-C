// Area and perimeter of a triangle
// modular form (Call by reference)
#include <stdio.h>
int perimeter (int *x, int *y, int *z);
double tri_area (double *height, int *base);
//void calculate (int x, int y, int z, double height, int *peri, double *area); (WHAT IS THE USE OF VOID FUNCTION HERE?)
int main ()
{
	int a, b, c;
	double height;
	double A;
	int P;
	printf ("Enter the lenghts of 3 sides of the triangle:");
	scanf (" %d %d %d", &a, &b, &c);
	printf ("Enter the vertical height:");
	scanf ("%lf", &height);
	printf ("Perimeter of the triangle = %d feet\n", perimeter (&a, &b, &c)); // Call by reference
	printf ("Area of the triangle= %.3f sq. feet", tri_area (&height, &b)); //call by reference
	//calculate (a, b, c, height, &P, &A); //invoking the VOID function mixed method
	return 0;	
}
int perimeter(int *x, int *y, int *z)
{
	return (*x + *y + *z);
}
double tri_area (double *height, int *base)
{
	return (0.5*(*height)*(*base));
}
 //void calculate (int x, int y, int z, double height, int *peri, double *area)
////{
	//double A;
//	int P;
//	A= 0.5*(height)*(y);
//	*area = A;
//	P = (x + y +z);
//	*peri = P;
//}

