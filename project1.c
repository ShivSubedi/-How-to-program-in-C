// SHIV SUBEDI 
//PROJECT1 (CS 5900-2016)
#include<stdio.h>
#include <string.h>
struct music
{
char title[100];
char artist [50];
int year;
double price;
};
typedef struct music category;
category  category1[25], temp[25];           // declare globally ......
//void sort(int W);                       /* Function declaration */
int main()
{
	category comp;
 int n = 0,i, w, j;
 char res = 'Y';
 char find [25];
 char Country, Pop, Rock, Soul;
 char key[100], c[100], d[50];
     int found = 0;
         FILE *fp;
         printf ("*****WELCOME TO OUR MUSIC COLLETION CENTER*****\n");
         printf ("We have following categories available (Country, Rock, Pop, R&B/Soul)\n");
         printf ("Enter the category you want to search:");
         scanf ("%s", find);
         if(strcmp(find, "Country") == 0 )
         {
         	   fp = fopen("country.txt", "r");     //open the file to read...
    while (!feof(fp))
      {
        fscanf(fp, "%s[^\n]", c);
        strcpy(category1[n].title, c);  
        fscanf(fp, "%s[^\n]", d);
        strcpy(category1[n].artist, d);
	    fscanf(fp,"%d",&category1[n].year);
        temp[n] = category1[n];
        fscanf(fp,"%lf",&category1[n].price);
        temp[n] = category1[n];
        n = n + 1;
    }
    n= n-1;
       fclose(fp);
 
         for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(strcmp(category1[i].title,category1[j].title) > 0 )
{

comp = category1[i];
category1[i]= category1[j];
category1[j]=comp;
}
}
 }       /* Function call */
 printf("\n*****************************\n");
 printf ("\n     Sorted display of shop by category     \n");
 printf("\n*****************************\n\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%20s\t%20s\t\t%d\t%.2f\n",category1[i].title,category1[i].artist,category1[i].year,category1[i].price);//temp original, category1 sorted
 }
 printf("\n*****************************\n");
 printf("\nWould you like to search? ");
 scanf("%\nc", &res);
 if ((res == 'y') || (res == 'Y'))
 {
        printf("\nEnter the title of the album: \n");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        for (i = 0; i < n; i++)
   {
      if (strcmp(category1[i].title, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Title: %s\n", category1[i].title);
         printf ("Artist: %s\n", category1[i].artist);
         printf ("Year of release: %d\n", category1[i].year);
         printf ("Price of the album: %.2f\n", category1[i].price);
         found = 1;              //search has found the match...
         break;
      }
   }
   if ((!found)|| (res == 'n') || (res == 'N'))
      printf("\n%s is NOT present in array.\n", key);
      }
     printf("\n** End of Program! ** \n");
}
else
printf ("Enter new category");
 return 0;
} 

   
