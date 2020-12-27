//SHIV SUBEDI (CS 5900)
// fINAL prob 1a
#include<stdio.h>
int main(){
  int exp;
  double x;
  double res;
  double power(double,int);
  printf("\nEnter the real value of X: ");
  scanf("%lf",&x);
  printf("\nEnter the exponent value: ");
  scanf("%d",&exp);
  res=power(x,exp);
  if (exp>0)
  printf("\n%.2f raised to the power %d is: %.2f",x,exp,res);
  else 
  printf ("You have entered a negative exponetial value! Enter a positive value for exponent.");
  
  return 0;
}
  int i=1;
  int sum=1;
  double power(double x,int exp)
  {
      if(i<=exp)
	  {
           sum=sum*x;
          power(x,exp-1);
      }
      
      return sum;
    
     
}
