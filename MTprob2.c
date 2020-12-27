// Big Judy's Furniture (SHIV SUBEDI)
#include <stdio.h>
int main ()
{
	char res1, res2, res3;
	double dis, amount;
	printf ("Enter your total purchased amount:$");
	scanf ("%lf", & amount);
	printf ("Are your a Preferred costumer?");
	scanf (" %c", &res1);
	if (res1 == 'y')
	{
		printf ("Did you order more than $1000?");
		scanf (" %c", &res2);
		if (res2 == 'y')
		{
			printf ("Did you use your charge card?");
			scanf (" %c", &res3);
			if (res3 == 'y')
			{
				dis= (amount*.10);
				printf (" Your total discount is: $ %f\n", dis);
			}
			else
			{
			dis= (amount*.05);
			printf (" Your total discount is: $ %f\n", dis);
			}
			
			
		}
		else
		printf ("You get a gift card worth $25\n");
	}
	else
	printf ("you get a gift card worth $5\n");
	return 0;
}
