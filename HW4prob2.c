//HW4prob2
//SHIV SUBEDI (CS5900)
#include <stdio.h>
#include <math.h>
int main ()
{ 
    int ta=0, tb=0, tc=0, td=0, tvote;
    double pta, ptb, ptc, ptd;
	int n, i;
	int p[] = {1, 2, 3, 4, 5};
	int a[] = {192, 147, 186, 114, 267};
	int b[] = {48, 90, 12, 21, 13};
	int c[] = {206, 312, 121, 408, 382};
	int d[] = {37, 21, 38, 39, 29};
	n = sizeof(p)/ sizeof (p[0]);
	printf (" Precinct \t Candidate A \t Candidate B \t Candidate C \t Candidate D \n");
	printf ("...............................................................................\n");
	for (i=0; i<n; i++)
	{
	printf ("  %d \t\t   %d \t\t   %d \t\t   %d \t\t   %d\n", p[i], a[i], b[i], c[i], d[i]);
	}
	printf ("................................................................................   \n");
	for (i=0; i<n; i++)
	{
		ta= ta+ a[i];
		tb = tb + b[i];
		tc = tc + c[i];
		td = td + d[i];
	}
		printf (" TOTAL \t\t   %d \t\t   %d \t\t   %d \t   %d\n", ta, tb, tc, td);
		tvote= (ta+tb+tc+td);
		//printf ("totalvotes is %d\n", tvote);
		pta = ((ta*100)/(tvote));
		//printf ("total = %d\n", ta);
		//printf ("percent = %f", pta);
		ptb = ((tb*100)/(tvote));
		ptc = ((tc*100)/(tvote));
		ptd = ((td*100)/(tvote));
		
		printf (" PERCENT \t %.2f \t\t   %.2f \t  %.2f \t   %.2f\n", pta, ptb, ptc, ptd);
		if ((pta>50) || (ptb>50) || (ptc>50) || (ptd>50))
		{
				if (pta>50)
		printf ("Candidate A is the winner\n");
		else if (ptb>50)
		printf ("Candidate B is the winner\n");
		else if (ptc>0)
		printf ("Candidate C is the winner\n");
		else if (ptd>50)
		printf ("Candidate D is the winner\n");
		}
	
		else
		{
				if ((pta>ptb) && (pta>ptc) && (pta>ptd) && ( ptb>ptc) && (ptb>ptd))
		printf("\n\nThere is a runoff buteween the candidates A and B");
		
		else if ((pta>ptb) && (pta>ptc) && (pta>ptd) && ( ptc>ptd) && (ptc>ptb))
		printf("\n\nThere is a runoff buteween the candidates A and c");
		
		else if ((pta>ptb) && (pta>ptc) && (pta>ptd) && ( ptd>ptc) && (ptd>ptb))
		printf("\n\nThere is a runoff buteween the candidates A and D");
		
		else if ((ptb>pta) && (ptb>ptc) && (ptb>ptd) && ( pta>ptc) && (pta>ptd))
		printf("\n\nThere is a runoff buteween the candidates A and B");
		
		else if ((ptb>pta) && (ptb>ptc) && (ptb>ptd) && ( ptc>pta) && (ptc>ptd))
		printf("\n\nThere is a runoff buteween the candidates B and C");
		
		else if ((ptb>pta) && (ptb>ptc) && (ptb>ptd) && ( ptd>pta) && (ptd>ptc))
		printf("\n\nThere is a runoff buteween the candidates B and D");
		
		else if ((ptc>pta) && (ptc>ptb) && (ptc>ptd) && ( pta>ptb) && (pta>ptd))
		printf("\n\nThere is a runoff buteween the candidates A and C");
		
		else if ((ptc>pta) && (ptc>ptb) && (ptc>ptd) && ( ptb>pta) && (ptb>ptd))
		printf("\n\nThere is a runoff buteween the candidates B and C");
		
		else if ((ptc>pta) && (ptc>ptb) && (ptc>ptd) && ( ptd>pta) && (ptd>ptb))
		printf("\n\nThere is a runoff buteween the candidates C and D");
		
		else if ((ptd>pta) && (ptd>ptb) && (ptd>ptc) && ( pta>ptb) && (pta>ptc))
		printf("\n\nThere is a runoff buteween the candidates A and D");
		
		else if ((ptd>pta) && (ptd>ptb) && (ptd>ptc) && ( ptb>pta) && (ptb>ptc))
		printf("\n\nThere is a runoff buteween the candidates B and D");
		
		else 
		printf("\n\nThere is a runoff buteween the candidates C and D");
	}
		
	return 0;
	
	
}
