
#include <stdio.h>
double power(double x, int exp);
int main()
{
    int exp; 
    double x;
  double result;
  printf("\nEnter the real value of X:");
  scanf("%lf", &x);
  printf("\nEnter the exponent value: ");
  scanf("%d", &exp);
  result = power(x, exp);
  if (exp>0)
  printf("\n%.2f raised to the power %d is: %.2f",x, exp, result);
  else 
  printf ("You have entered a negative exponetial value! Enter a positive value for exponent.");
    //printf("%d^%d = %d", base, exp, power(base, exp));
    return 0;
}
double power(double x, int exp)
{
    if ( exp>0 )
        return (x*power(x,exp-1));
    
}
