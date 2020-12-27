// SHIV SUBEDI (CS 5900)
// Final Prob2
#include<stdio.h>
#include <string.h>
struct contact
{
char city[50];
char hotel [50];
char distance[50];
int price;

};
typedef struct contact category;
category  category1[50], temp[50], temp2 [50] ;          // declare globally ......
void sort1(int w);   
void sort2(int w);   
void sort3(int w);                  /* Function declaration */
int main()
{
	//category comp;
 int n, i, w, j;
 char res;
 int res1, res3;
 
 char key[100], c[100], d[50], e[50], f[50], g[50];
     int found = 0;
         FILE *fp;
        
         printf ("Following database contains details about CITIES, HOTELS, DISTANCE, PRICE\n");
         
         	   fp = fopen("hotels.txt", "r");     //open the file to read...
    while (!feof(fp))
      {
        fscanf(fp, "%s[^\n]", c);
        strcpy(category1[n].city, c); 
		 fscanf(fp, "%s[^\n]", e);
        strcpy(category1[n].hotel, e); 
        fscanf(fp, "%s[^\n]", f);
        strcpy(category1[n].distance, f);
		
        fscanf(fp,"%d",&category1[n].price);
        temp[n] = category1[n]; 
       		 
        n = n + 1;
    }
	//n= n-1;
       fclose(fp);
 
       printf("\n************************************************************************");
 printf ("\n                       Database before sorting     \n");
 printf("************************************************************************\n");
 printf ("\tCITY\t\t HOTEL\t\t\tDISTANCE\tPRICE\n");
     /* Print the list of names before sorting */
 for(i = 0;i < n; i++)

 {
printf("\t%-15s%-25s  %-5s\t\t %d\n",temp[i].city,temp[i].hotel,temp[i].distance,temp[i].price);
 } 
 printf ("\n\nWould you like to SEARCH ANY ENTRY or SORT THE DATABASE?\n");
 printf ("Enter A for SEARCHING ANY ENTRY\n");
 printf ("Enter B for SORTING THE DATABASE\n");
 printf ("\nEnter your response:");
 scanf (" %c", &res);
 
 if (res == 'A')
 {
 	printf ("Would you like to search by CITY or DISTANCE RANGE?\n");
 	printf ("Enter 1 for SEARCHING by CITY\n");
 	printf ("Enter 2 for SEARCHING by DISTANCE RANGE\n");
 	printf ("Enter 3 to EXIT the program\n");
 	printf ("\nEnter your response:");
 	scanf ("%d", &res1);
 	switch (res1)
 	{
 		case 1:
 			 printf("\nEnter the CITY to search:");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        for (i = 0; i < n; i++)
   {
      if (strcmp(category1[i].city, key) == 0)
      {
      	printf ("%s at distance %s has price $%d\n", category1[i].hotel, category1[i].distance, category1[i].price);
       
      }
  }
  break;
  
  case 2:
  	 printf("\nEnter the DISTANCE RANGE to search:");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        for (i = 0; i < n; i++)
   {
      if (strcmp(category1[i].distance, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("City: %s\n", category1[i].city);
         printf ("Hotel: %s\n", category1[i].hotel);
         printf ("Distance Range: %s\n", category1[i].distance);
         printf ("Price: %d\n", category1[i].price);
         found = 1; 
  	
	 }
 	
 }
 break;
 default: {
                  
                  printf ("END OF PROGRAM");
	
	}
    }
 
     }
else
{
	printf ("\n\nWould you like to sort by CITY, HOTEL_NAME, PRICE?\n");
	printf ("Enter 1 to sort by CITY\n");
	printf ("Enter 2 to sort by HOTEL\n");
	printf ("Enter 3 to sort by PRICE\n");
	printf ("Enter 4 to EXIT\n\n");
	printf ("Enter your response:");
	scanf ("%d", &res3);
	switch (res3)
	{
	case 1:
		sort1(n);
		 printf("\n************************************************************************");
        printf ("\n                    Database sorting according to City     \n");
         printf("************************************************************************\n");
        printf ("\tCITY\t\t HOTEL\t\t\tDISTANCE\tPRICE\n");
   
         for(i = 0;i < n; i++)

         {
          printf("\t%-15s%-25s  %-5s\t\t %d\n",category1[i].city,category1[i].hotel,category1[i].distance,category1[i].price);
        } 
	
         break;
           
    case 2:
         sort2(n);
		 printf("\n************************************************************************");
          printf ("\n                    Database sorting according to HOTEL_NAME     \n");
           printf("************************************************************************\n");
          printf ("\tCITY\t\t HOTEL\t\t\tDISTANCE\tPRICE\n");
   
          for(i = 0;i < n; i++)

          {
          printf("\t%-15s%-25s  %-5s\t\t %d\n",category1[i].city,category1[i].hotel,category1[i].distance,category1[i].price);
    } 
	
           break;
           
    case 3:
         sort3(n);
		 printf("\n************************************************************************");
         printf ("\n                    Database sorting according to PRICE     \n");
         printf("************************************************************************\n");
         printf ("\tCITY\t\t HOTEL\t\t\tDISTANCE\tPRICE\n");
   
          for(i = 0;i < n; i++)

          {
          printf("\t%-15s%-25s  %-5s\t\t %d\n",category1[i].city,category1[i].hotel,category1[i].distance,category1[i].price);
          } 
	
    break;
           	
           	
         default:
     	  {
     		printf ("End of program");
     		
		 }
     	
		
	}
	
	
     	
}
return 0;
} 
void sort1(int w)
{
 int i,j;
 category temp;
 for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(strcmp(category1[i].city,category1[j].city) >
0 )
{

temp   = category1[i];
category1[i] = category1[j];
category1[j] = temp;
}
}
 }
} 
void sort2(int w)
{
 int i,j;
 category temp;
 for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(strcmp(category1[i].hotel,category1[j].hotel) >
0 )
{

temp   = category1[i];
category1[i] = category1[j];
category1[j] = temp;
}
}
 }
} 
void sort3(int w)
{
 int i,j;
 category comp;
 for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(category1[i].price> category1[j].price)
{

comp   = category1[i];
category1[i] = category1[j];
category1[j] = comp;
}
}
 }
} 
   
