// SHIV SUBEDI 
//PROJECT1 (CS 5900-2016)
#include<stdio.h>
#include <string.h>
struct music
{
char title[100];
char artist [50];
char category[50];
int year;
double price;
};
typedef struct music category;
category  category1[50], temp[50];           // declare globally ......
void sort(int W);                       /* Function declaration */
int main()
{
	category comp;
 int n = 0, i, w, j;
 char res;
 //char find [25];
 //char Country, Pop, Rock, Soul;
 char key[100], c[100], d[50], e[50];
     int found = 0;
         FILE *fp;
         printf ("*****WELCOME TO OUR MUSIC COLLETION CENTER*****\n");
         printf ("We have following categories available (Country, Rock, Pop, R&B/Soul)\n");
         
         	   fp = fopen("music.txt", "r");     //open the file to read...
    while (!feof(fp))
      {
        fscanf(fp, "%s[^\n]", c);
        strcpy(category1[n].title, c); 
		 fscanf(fp, "%s[^\n]", e);
        strcpy(category1[n].category, e);  
        fscanf(fp, "%s[^\n]", d);
        strcpy(category1[n].artist, d);
	    fscanf(fp,"%d",&category1[n].year);
        temp[n] = category1[n];
        fscanf(fp,"%lf",&category1[n].price);
        temp[n] = category1[n];
        n = n + 1;
    }n= n-1;
       fclose(fp);
 
         //for(i = 0; i < w-1;i++)
 //{
//for(j = i+1; j < w; j++)
//{
//if(strcmp(category1[i].category,category1[j].category) > 0 )
//{

//comp = category1[i];
//category1[i]= category1[j];
//category1[j]=comp;
//}
//}
 //}       /* Function call */
 sort(n);
 printf("\n*****************************************************************************\n");
 printf ("\n                    Sorted display of shop by TITLE     \n");
 printf ("\t TITLE \t\t   CATEGORY \tARTIST \t\t\t YEAR \t PRICE");
 printf("\n******************************************************************************\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%-20s\t%-10s\t%-20s\t%-5d\t$%.2f\n",category1[i].title,category1[i].category,category1[i].artist,category1[i].year,category1[i].price);//temp original, category1 sorted
 }
 printf("\n*******************************************************************************\n");
 printf("\nWould you like to search? ");
 scanf("%c", &res);
 
 while ((res == 'y') || (res == 'Y'))
 {
 	found = 0;
        printf("\nEnter the keyword (Title, Category, Artist) to search:");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        for (i = 0; i < n; i++)
   {
      if (strcmp(category1[i].title, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Title: %s\n", category1[i].title);
         printf ("Category: %s\n", category1[i].category);
         printf ("Artist: %s\n", category1[i].artist);
         printf ("Year of release: %d\n", category1[i].year);
         printf ("Price of the album: $%.2f\n", category1[i].price);
         found = 1;              //search has found the match...
         //break;
      }
  }
  
 for (i = 0; i < n; i++)
      {
      	 if (strcmp(category1[i].category, key) == 0)
      {
      	printf ("Title: %-20s\t\tArtist: %-20s\t\tRelease date: %-5d\t\tPrice: $%.2f\n", category1[i].title, category1[i].artist, category1[i].year, category1[i].price);
    found = 1 ;
         /*printf("\n%s is present at index %d, means position %d\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Title: %s\n", category1[i].title);
          printf ("Category: %s\n", category1[i].category);
         printf ("Artist: %s\n", category1[i].artist);
         printf ("Year of release: %d\n", category1[i].year);
         printf ("Price of the album: %.2f\n", category1[i].price);
         found = 1;              //search has found the match...
         //break; */
      } 
	}
   for (i = 0; i < n; i++)
   {
	if (strcmp(category1[i].artist, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Title: %s\n", category1[i].title);
          printf ("Category: %s\n", category1[i].category);
         printf ("Artist: %s\n", category1[i].artist);
         printf ("Year of release: %d\n", category1[i].year);
         printf ("Price of the album: %.2f\n", category1[i].price);
         found = 1;
         //break;
	}	
       }
   if  ((!found)|| (res == 'n') || (res == 'N'))
      printf("\n%s is NOT present in array.\n", key);
      printf ("\nWould you like to search again?");
      scanf (" %c", &res);
      }
    
	printf("\n** End of Program! ** \n");
return 0;
} 
void sort(int w)
{
 int i,j;
 category comp;
 for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(strcmp(category1[i].title,category1[j].title) >
0 )
{
//Page 2
//Phone_book_files.c
comp    = category1[i];
category1[i] = category1[j];
category1[j] = comp;
}
}
 }
}

   
