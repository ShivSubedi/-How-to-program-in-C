// stadium seats
# include <stdio.h>
int main ()
{
	int num;
	char seat;
	double price;
	printf ("How many tickets do you want to to buy?");
	scanf ("%d", &num);
	printf ("\nChoose your seat of preference.\n");
	printf ("(Enter U for upperzone)\n");
	printf ("(Enter L for Lowerzone\n");
	printf ("(Enter C for club seating)\n");
	printf ("(Enter S for Sideline)\n");
	printf ("\nEnter where do you want to seat?");
	scanf (" %c", &seat);
	switch (seat)
	{
		case 'U': case 'u': price= num * 75.0;
			break;
		case 'L': case 'l': price= num * 100.0;
		break;
		case 'S': case 's': price= num * 150.0;
		break;
		case 'C': case 'c': price= num * 500.0;
		break;
		default:
			price= 0.0;
			
			
	}
	printf ("\nFor %d tickets purchased, your total cost for %c is %f", num,seat,price);
	return 0;
}
