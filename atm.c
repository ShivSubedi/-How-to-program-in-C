//atm withdraw( try for balance >0)
# include <stdio.h>
# define mypin 2223
int main ()
{
	int i=0, pin, num;
	double balance= 1000.0;
	char res = 'y';
	printf ("enter your PIN");
	scanf ("%d", &pin);
	while ((pin== mypin) && ( res == 'y')) // while statement allows to create loop for number of withdrawls

	{
		printf (" Enter how much do you want to withdraw:");
		scanf ("%d", &num);
		balance -= num;
		i ++;
		printf (" Would you like another withdaw?");
		scanf (" %c", &res);
	}
	if (pin== mypin)  //if statement simply allows to decision making not to allow to withdraw for wrong pin
	{
		printf ("\n your current balance is $%.3f ", balance);
	printf ("THANK YOU!");
	}
	
	else
	printf ("Sorry, check your pin number");
	return 0;
	
}
