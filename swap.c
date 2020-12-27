// swap program
void swap (int *x, int *y); //call by reference
int main ()
{
	int a, b;
 printf ("Enter the value for a = ");
 scanf ("%d", &a);
 printf ("Enter the value for b = ");
 scanf ("%d", &b);
 printf ("\nBefore swap, value of a: %d\n", a);
 printf ("Before swap, value of b: %d\n", b);
 swap (&a,&b); //remember this
 printf ("\nAfter swap, value of a: %d\n", a);
 printf ("After swap, value of b: %d\n", b);
 return 0;
}
void swap (int *x, int *y)
{
int temp;
temp= *x; //call by reference
*x = *y;
*y = temp;
//printf ("\nAfter swap, value of a: %d\n", a);
//printf ("After swap, value of b: %d\n", b);	
}

