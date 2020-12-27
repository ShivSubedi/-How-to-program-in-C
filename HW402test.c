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
	double T;
	double a, b, c,d;
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
	//for (i =0; i < n; i++)
	//	{
	//		pera[i] = (KJ.A[i])/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]);			
			//perb[i] = (KJ.B[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]));
			//perc[i] = (KJ.C[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]));
			//perd[i] = (KJ.D[i]/(KJ.A[i]+KJ.B[i]+KJ.C[i]+KJ.D[i]));
	//	}
	
	
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
	
	printf("\nGrand Total of all votes cast is:: %.0f\n" ,T);
	printf("\nPrecentage \t%.2f \t\t%.2f \t\t%.2f \t\t%.2f \n", a, b, c, d);
	
	for (i = 0; i<n; i++)
		{
		printf("\nTotal vote cast in Precinct %d is: %d", i+1, tot[i]);
		//printf("\nIndividual Percentage of vote for candidate in Precinct %d is A %.2f \n",i+1, pera[i]);
		}
	if ((a>50) || (b>50) || (c>50) || (d>50))
	{
		if (a>50)
		printf("\n\nCandidate A is Victorious");
	
		else if (b>50)
		printf("\n\nCandidate B is Victorious");
	
		else if (c>50)
		printf("\n\nCandidate C is Victorious");
	
		else if (d>50)
		printf("\n\nCandidate D is Victorious");
	
		else
		printf("\n\nNO One is indenpendiently Victrious");
	}
	
	else //if ((a<50) && (b<50) && (c<50) && (d<50))
	{
		if ((a>b) && (a>c) && (a>d) && ( b>c) && (b>d))
		printf("\n\nAccording to percentage A and B are Victorious");
		
		else if ((a>b) && (a>c) && (a>d) && ( c>d) && (c>b))
		printf("\n\nAccording to percentage A and C are Victorious");
		
		else if ((a>b) && (a>c) && (a>d) && ( d>c) && (d>b))
		printf("\n\nAccording to percentage A and D are Victorious");
		
		else if ((b>a) && (b>c) && (b>d) && ( a>c) && (a>d))
		printf("\n\nAccording to percentage B and A are Victorious");
		
		else if ((b>a) && (b>c) && (b>d) && ( c>a) && (c>d))
		printf("\n\nAccording to percentage B and C are Victorious");
		
		else if ((b>a) && (b>c) && (b>d) && ( d>a) && (d>c))
		printf("\n\nAccording to percentage B and D are Victorious");
		
		else if ((c>a) && (c>b) && (c>d) && ( a>b) && (a>d))
		printf("\n\nAccording to percentage C and A are Victorious");
		
		else if ((c>a) && (c>b) && (c>d) && ( b>a) && (b>d))
		printf("\n\nAccording to percentage C and B are Victorious");
		
		else if ((c>a) && (c>b) && (c>d) && ( d>a) && (d>b))
		printf("\n\nAccording to percentage C and D are Victorious");
		
		else if ((d>a) && (d>b) && (d>c) && ( a>b) && (a>c))
		printf("\n\nAccording to percentage D and A are Victorious");
		
		else if ((d>a) && (d>b) && (d>c) && ( b>a) && (b>c))
		printf("\n\nAccording to percentage D and B are Victorious");
		
		else //((d>a) && (d>b) && (d>c) && ( c>a) && (c>b))
		printf("\n\nAccording to percentage D and C are Victorious");
	}
		
	
	
return 0;
}
