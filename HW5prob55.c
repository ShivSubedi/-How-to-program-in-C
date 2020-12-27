// hw4, PROB 5
//SHIV SUBEDI (CS 5900)
# include <stdio.h>
#include <string.h>
struct database
{
 int num, num2, date, code, limit, amount, price;
 char card[25], bank[25], name[25];
};
int main ()
{ 
char res='y';
    struct database customer_details;
	printf ("Enter the Card type (Visa/MC/Discover):");
	 fflush(stdin);
	gets(customer_details.card);
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
	scanf ("%d", &customer_details.limit);
	if (customer_details.amount <= customer_details.limit)
	{
			While (res=='y')
	{
		printf ("Are you ready to checkout:");
		scanf ("%s", res);
		printf ("Enter the purchased item:");
	scanf ("%s", customer_details.item);
	printf ("Enter the purchase price:");
	scanf ("%d", &customer_details.price);
	customer_details.amount= customer_details.amount + customer_details.price;
	customer_details.limit= customer_details.limit- customer_details.price;
	printf ("Do you have additional items for checkout");
	scanf ("%s", res);
		
	};
	
		
	}
	printf ("Your payment is approved");
	printf (" Your total balance is $%d and your new decreased credit limit is $%d", customer_details.amount, customer_details.limit);
	else
	printf ("Your payment is declined");

	
	return 0;	
	}
	
