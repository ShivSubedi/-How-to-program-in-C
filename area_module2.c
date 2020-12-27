// area using modular programming
#include <stdio.h>
#include <math.h>
#define PI 3.1415
double Cir(int r);
double Ar(int r); //function prototype or function declaration
int main ()
{
	int r;
	//double circum, area;
	printf ("Enter a value of radius:");
	scanf ("%d", &r);
	//circum = 2 * PI * r;
	//area = PI * pow(r,2);
	//circum = Cir (r);
	//area = Ar(r);
	printf ("Area of the circle is: %.3f\n", Ar(r));
	printf ("Circumference of the circle is:%.3f\n", Cir(r)); 
	return 0;
}
double Cir(int r)
{
	//double circumference; //local variable
	//circumference = 2 * PI * r;
	double circum; //local variable whose value we return to Cir(r) and which in turn goes to the printf statement above.
	circum = 2 * PI * r;
	return (circum); //instead of returning the local value we could assign the mathematical formula directly( as done in area_module, check it!)	
 }
double Ar(int r)
{
	double area;
	area = PI * pow(r,2);
	return (area);
}
