//SHIV SUBEDI (CS5900)
//FINAL EXAM (PROB3)
#include <stdio.h>
#include <string.h>
int main()
{
    char temp[25];
    int i, n, j;
    int res;
    double temp2;
    //int found = 0;
    char id [][20] = {"PJ24", "CS46", "TM89","AC25", "MC34", "NO10", "FS78", "HC11", "BB99"};
    double balance [] = { 1.50, 35.75, 50.00, 85.00, 95.00, 150.00, 185.00, 250.00, 435.00};
    char zip[][20] = {"06470","06470","05433","05431", "05431", "06471", "05434", "05431", "05433"};
        n = sizeof (id)/sizeof id[0];
        printf ("\nSorting options available\n");
        printf ("Enter 1 to SORT by Adviser-ID\n");
        printf ("Enter 2 to SORT by Balance (in descending order)\n");
        printf ("Enter 3 to EXIT the program\n");
        printf ("\nEnter your response: ");
        scanf ("%d", &res);
        switch (res)
        
        {
        
case 1:
		 printf ("\n********Displaying sorted table by Adviser- ID********");
		   for (i = 0; i < n - 1 ; i++)
            {
         for (j = i + 1; j < n; j++)
                {
             if (strcmp(id[i], id[j]) > 0) //> sign for arranging in ascending order
              {
                  strcpy(temp, id[i]);            //copy to swap
                  strcpy(id[i], id[j]);
                  strcpy(id[j], temp);
                   temp2 = balance[i];            //copy to swap
                  balance[i] = balance[j];
                  balance[j], temp2;
                   strcpy(temp, zip[i]);            //copy to swap
                  strcpy(zip[i], zip[j]);
                  strcpy(zip[j], temp);
                  
              }
            }
     }
      printf("\n-----------------------------------------------------------\n");
      printf ("                       City Bus Co\n\n");
            printf("\tAdviser-ID\tBalance\t\t ZIP Code\n");
            printf("------------------------------------------------------------\n");
      for (i = 0; i < n; i++)
            {
                printf("\t  %s\t\t$%.2f\t\t  %s\n", id[i], balance[i], zip[i]);
		}
		 printf("---------------------------------------------------------\n");
		 break;
   case 2:
   	printf ("\n***Displaying sorted table by Balance (Descending order)***");
		   for (i = 0; i < n - 1 ; i++)
            {
         for (j = i + 1; j < n; j++)
                {
             if (balance[i] < balance[j]) //> sign for arranging in ascending order
              {
              	 temp2 = balance[i];            //copy to swap
                balance[i] = balance[j] ;
                balance[j] = temp2 ;
                  strcpy(temp, id[i]);            //copy to swap
                  strcpy(id[i], id[j]);
                  strcpy(id[j], temp);
                  
                   strcpy(temp, zip[i]);            //copy to swap
                  strcpy(zip[i], zip[j]);
                  strcpy(zip[j], temp);
                  
              }
            }
     }
      printf("\n-----------------------------------------------------------\n");
      printf ("                       City Bus Co\n\n");
            printf("\tAdviser-ID\tBalance\t\t ZIP Code\n");
            printf("------------------------------------------------------------\n");
      for (i = 0; i < n; i++)
            {
                printf("\t  %s\t\t$%.2f\t\t  %s\n", id[i], balance[i], zip[i]);
		}
		 printf("---------------------------------------------------------\n");
		 break;
   	
	
		 
  default: 
                  
                  printf ("END OF PROGRAM");
	
	
}
	return 0;
}
		      
        
