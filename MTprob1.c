//walmart shopping
#include <stdio.h>
int main ()
{
	int i, n;
	double tkwh=0.0, totalkwh= 0.0;
	int cn[]= {121, 205, 464, 613, 596, 601, 725};
	double kwh [] = {725, 115, 600, 915, 322, 1011, 47};
	n = sizeof(cn)/ sizeof (cn[0]);
	printf ("Total number of costumers = %d", n);
	double charge [n];
	printf ("\n Display of KWH Usage by costumers \n\n");
	printf ("Costumer#     KWH used     Charges\n\n");
	for (i=0; i < n; i++)
	{
		if (kwh[i]< 300)
		charge[i]= kwh[i]*.09;
		else if ((kwh[i]>=300) && (kwh[i]<=600))
		charge[i]= kwh[i]*.08;
		else if ((kwh[i]>600) && (kwh[i]<1000))
		charge[i]= kwh[i]*.06;
		else 
		charge[i]= kwh[i]*.05;
		tkwh +=kwh[i];
		totalkwh += charge[i];
		printf ("%d         %.3f          %.3f \n", cn[i], kwh[i], charge[i]);
	}
	printf ("Total KWH by all the costumers= %f", tkwh);
	printf ("\nTotal charges for this costumer list= $%.3f\n", totalkwh);
	return 0;
}
