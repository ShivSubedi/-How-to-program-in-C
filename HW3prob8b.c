//temperature classification
//SHIV SUBEDI (cs 5900)
#include <stdio.h>
int main ()
{
	int temp;
	int shtemp=0, sptemp=0, sctemp=0, sum1=0, sum2=0, sum3=0, sum, count, max;
	double avg;
	printf ("How many days do you want to input?");
	scanf ("%d", &max);
	//temp []= {55,62,68,74,59,45,41,58,60,67,65,78,82,88,91,92,90,93,87,80,78,79,72,68,61,59};
	for (count=1; count<=max; count++)
	{
	printf ("Enter the temperature:");
	scanf ("%d", &temp);
	if (temp>84)
	{
	printf ("Given temp of %d belongs to HOT DAYS\n", temp);
	shtemp=shtemp+1;
	sum1=(sum1+temp);
	}
	else if ((temp>=60) && (temp<=84))
	{
	printf ("Given temp of %d belongs to PLEASANT DAYS\n", temp);
	sptemp=sptemp+1;
	sum2=(sum2+temp);
	}
	else
	{
	printf ("Given temp of %d belongs to COLD DAYS\n", temp);
	sctemp=sctemp+1;
	sum3=(sum3+temp);
	}
	
	};
printf ("\nTotal number of hot days is: %d\n", shtemp);
printf ("Total number of pleasant days is: %d\n", sptemp);
printf ("Total number of cold days is: %d\n", sctemp);
sum=(sum1+sum2+sum3);
avg=(sum/max);
printf ("The average of the given temperatures be: %.3f\n", avg);
return 0;

}
