// comparing max value
#include <stdio.h>
int max(int num1, int num2);
int main ()
{
	//local variable declaration
	int a = 100;
	int b = 200;
	int comp;
	comp = max (a,b); //calling a function to get max value
	printf ("Max value is: %d", comp);
	return 0;
}
int max (int num1, int num2)
{
	int result;//local variable declaration
	if (num1 > num2)
	result = num1;
	else
	result = num2;
	return result;
}
