//HW4prob2
//SHIV SUBEDI (CS5900)
#include <stdio.h>
#include <math.h>
int main ()
{ 
    int tm=0, m[20], z[20];
	double tg=0.0, avg_mpg, mpg[20], g[20], sec[20], temp;
	int n, i, j;
	printf ("How many travels do you want to enter:");
	scanf ("%d", &n);
	
	for (i=0; i<n; i++)
	{
	printf ("Enter the distance travelled (in miles)");
	scanf("%d", &m[i]);
	printf ("Enter the gallons of gas used:");
	scanf ("%lf", &g[i]);
		mpg[i]= (m[i]/g[i]);
	}
	printf ("\n \t Miles Travelled \t Gallons of gas used \t\t MPG\n");
	printf ("...............................................................................\n");
	for (i=0; i<n; i++)
	{
			printf (" \t %d \t\t\t  %.2f \t\t\t %.2f\n", m[i], g[i], mpg[i]);
		
	}
	

	printf ("................................................................................   \n");
	for (i=0; i<n; i++)
	{
		tm= tm+ m[i];
		tg = tg + g[i];
	
	}
		printf (" TOTAL \t    %d \t\t  %.2f\n", tm, tg);
		avg_mpg= (tm/tg);
		printf ("Average MPG of my travel is: %.2f\n", avg_mpg);
for (i=0; i<n; i++)
{
	z[i]=m[i];
	sec[i]=mpg[i];
	
	}	
//  implement the sorting algorithm ................
for (i = 0; i < n - 1; i++)
{
for (j = i+1; j < n; j++)
{
if (sec[i] > sec[j])
{
temp = sec[i];
sec[i]= sec[j];
sec[j]= temp;
temp = z[i];
z[i]=z[j];
z[j]= temp;
}
}
}
printf("\n******* Sorted *******\n\n");
//for (i = 0; i <n; i++)
//{
printf ("Max value of mpg is: %.2f for distance travelled of %d\n", sec[n-1], z[n-1]);
printf ("Min value of mpg is: %.2f for distane travelled of %d\n\n", sec[0], z[0]);
printf("\n\nAll DONE!! \n");
	
//}

		
		
	
	return 0;
	
	
}
