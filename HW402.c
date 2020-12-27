//CS 5900 Programing in C
//SANJOY SARKAR; HW#4 Problem [1, Problem 6 of Book pg 515]
//Sorting Name

#include <stdio.h>
#include <string.h>

struct voting
{
	int A[10];
	int B[10]; 
	int C[10];
	int D[10];
};

int main()
{
	struct voting KJ; //declare variable KJ of the type struct defined above!!
	FILE *fp;
	int tot[10];
	double a, b, c,d, T;
	int tota=0, totb=0; 
	int totc=0, totd=0;
	double pera[10], perb[10], perc[10], perd[10];
	int i, n = 0;
	
	fp = fopen("vote.txt", "r"); //open the file to read...
	
	while (!feof(fp))
		{
			fscanf(fp, "%d", &KJ.A[n]);
			fscanf(fp, "%d", &KJ.B[n]);
			fscanf(fp, "%d", &KJ.C[n]);
			fscanf(fp, "%d", &KJ.D[n]);
			n = n + 1;
		}
	
	fclose(fp);
	
	for (i = 0; i < n; i++)
			{
				tota=tota+KJ.A[i];
				totb=totb+KJ.B[i];
				totc=totc+KJ.C[i];
				totd=totd+KJ.D[i];
	
			}
	for (i = 0; i < n; i++)
		{
			tot[i] = KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i];
			
		}
	for (i =0; i < n; i++)
		{
			pera[i] = ((double)KJ.A[i])/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i])*100;			
			perb[i] = ((double)KJ.B[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]))*100;
			perc[i] = ((double)KJ.C[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]))*100;
			perd[i] = ((double)KJ.D[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]))*100;
		}
	
	
	printf("\nPrecinct \tCandidate A \tCandidate B \tCandidate C \tCandidate D\n");
	printf("---------------------------------------------------------------------------\n");
	
	for (i = 0; i < n; i++)
		printf("%d \t\t%d \t\t%d \t\t%d \t\t%d\n", i+1, KJ.A[i], KJ.B[i], KJ.C[i], KJ.D[i]);
	printf("---------------------------------------------------------------------------\n");
		
		
	printf("Total \t\t%d \t\t%d \t\t%d \t\t%d\n", tota, totb, totc, totd);
	
	T = tota+totb+totc+totd;
	a = (tota/T)*100;
	b = (totb/T)*100;
	c = (totc/T)*100;
	d = (totd/T)*100;
	
	printf("\nPrecentage \t%.2f \t\t%.2f \t\t%.2f \t\t%.2f \n", a, b, c, d);
	
	for (i = 0; i<n; i++)
		{
		printf("\nTotal vote cast in Precinct %d is: %d ", i+1, tot[i]);
printf("\nPrcntz of vote for candidate in Precinct %d:is A= %.2f, B=%.2f, C=%.2f, D=%.2f\n",i+1,pera[i],perb[i],perc[i],perd[i]);
		}
	
	
	
return 0;
}
