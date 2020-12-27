// modular programming
// Call by value
#include <stdio.h>
int max(int num1, int num2);
int main ()
{
	int a= 100;
	int b= 200;
	int compare;
	compare = max (a,b);
	printf ("Max value is: %d", compare);
	return 0;
}
int max (int num1, int num2)
{
	int result;
	if (num1> num2)
result = num1;
else
result = num2;
return result;
}


