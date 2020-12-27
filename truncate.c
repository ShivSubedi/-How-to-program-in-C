#include <stdio.h>
 
int main(void) 
{
 
    int a; 
    double i;
    printf ("enter a number:");
    scanf ("%lf", &i);
 
    a = trunc(i);
 
    printf("%d", a);
 
    return(0);
}
