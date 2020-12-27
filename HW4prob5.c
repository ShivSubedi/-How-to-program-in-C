// hw4, PROB 5
//SHIV SUBEDI (CS 5900)
# include <stdio.h>
#include <string.h>
#include <math.h>
struct database
{
 int num, num2, date, code;
 double price, limit, amount;
 char card[25], bank[25], name[25], item[25];
};
int main ()
{ 
char res='y';

    struct database customer_details;
	printf ("Enter the Card type (Visa/MC/Discover):");
	scanf ("%s", customer_details.card);
	printf ("Enter the Card number:");
	scanf ("%d", &customer_details.num);
	printf ("Enter the Issuing Bank's name:");
	scanf ("%s",customer_details.bank);
	printf ("Enter the Account's Holder name:");
	scanf ("%s", customer_details.name);
	printf ("Enter the Account number:");
	scanf ("%d", &customer_details.num2);
	printf ("Enter the Card expiration date:");
	scanf ("%d", &customer_details.date);
	printf ("Enter the security code:");
	scanf ("%d", &customer_details.code);
	printf ("Enter the current balance of card:");
	scanf ("%lf", &customer_details.limit);
	
	
			do
				
	{
	
		printf ("Enter the purchased item:");
	scanf ("%s", customer_details.item);
	printf ("Enter the purchase price:");
	scanf ("%lf", &customer_details.price);
	customer_details.amount= customer_details.amount + customer_details.price;
	customer_details.limit= customer_details.limit- customer_details.price;
	printf ("Do you have additional items for checkout");
	scanf ("%s", &res);
		
	}while (res == 'y');
	printf ("Your total purchase amount is: %.2f\n",customer_details.amount );
	if (customer_details.amount < customer_details.limit)
	{
	printf ("Your payment is approved and your new decreased credit limit is $%.2f\n", customer_details.limit);
		
	}
	else
	printf ("However, Your credit is insufficient for payment, hence your payment is declined");

	
	return 0;	
	}
	
