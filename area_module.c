// area using modular programming
#include <stdio.h>
#include <math.h>
#define PI 3.1415
double Cir(int r);
double Ar(int r); //function proototype or function declaration
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
	return (2*PI*r); 	
 }
double Ar(int r)
{
	return (PI*r*r);
}
