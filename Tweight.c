// Converting pounds and ounces into kilograms and grams
# include <stdio.h> 
# define pound_ounce 0.0625
# define kg_pound 0.453592
# define gm_kg 1000
int main()
{
	//declaring variables
	int pound, ounce;
	double tweight, kg, gram;
	printf ("Enter the weight of package in pounds:");
	scanf ("%d", &pound);
	printf ("\nEnter the weight of package in ounces:");
	scanf ("%d", &ounce);
	tweight = pound + ounce* pound_ounce;
	printf ("\nYour total weight of package in pounds is: %.3f pounds\n", tweight);
	kg= tweight * kg_pound;
	printf ("\nYour total weight of package in Kilograms is: %.3f kilograms\n",kg);
	gram = kg * gm_kg;
	printf ("\nYour total weight of package in grams is: %.3f grams",gram);
	return 0;
}
