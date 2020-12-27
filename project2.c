// SHIV SUBEDI 
//PROJECT2 (CS 5900-2016)
#include<stdio.h>
#include <string.h>
struct contact
{
char name[100];
char address [50];
char phone[50];
char email[50];

};
typedef struct contact category;
category  category1[50], temp[50];           // declare globally ......
void sort(int w);                       /* Function declaration */
int main()
{
	category comp;
 int n = 0, i, w, j;
 char res;
 //char find [25];
 //char Country, Pop, Rock, Soul;
 char key[100], c[100], d[50], e[50], f[50], g[50];
     int found = 0;
         FILE *fp;
         printf ("*****Following is the contact list of my friends*****\n");
         printf ("The list contains details about NAME, ADDRESS, PHONE#, EMAIL\n");
         
         	   fp = fopen("contact.txt", "r");     //open the file to read...
    while (!feof(fp))
      {
        fscanf(fp, "%s[^\n]", c);
        strcpy(category1[n].name, c); 
		 fscanf(fp, "%s[^\n]", e);
        strcpy(category1[n].address, e);  
       		 fscanf(fp, "%s[^\n]", g);
        strcpy(category1[n].phone, g); 
	//    fscanf(fp,"%d", &category1[n].phone);
        //temp[n] = category1[n];
        fscanf(fp, "%s[^\n]", f);
        strcpy(category1[n].email, f);
        n = n + 1;
    }n= n-1;
       fclose(fp);
 
         //for(i = 0; i < w-1;i++)
 //{
//for(j = i+1; j < w; j++)
//{
//if(strcmp(category1[i].name, category1[j].name) > 0 )
//{

//comp = category1[i];
//category1[i]= category1[j];
//category1[j]=comp;
//}
//}
 //}  
 sort(n);     /* Function call */
 printf("\n*******************************************************************************\n");
 printf ("\n                   Sorted contact information by name    \n\n");
 printf ("\t   NAME\t\t   ADDRESS \t PHONE# \t\t EMAIL");
 printf("\n*******************************************************************************\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%20s\t%10s\t%s\t%s\n",category1[i].name,category1[i].address,category1[i].phone,category1[i].email);//temp original, category1 sorted
 }
 printf("\n********************************************************************************\n");
 printf("\nWould you like to search? ");
 scanf(" %c", &res);
   
  while ((res == 'y') || (res == 'Y'))
 
 {
        printf("\nEnter the keyword (Name, Address) to search:");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        for (i = 0; i < n; i++)
   {
      if (strcmp(category1[i].name, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Name: %s\n", category1[i].name);
         printf ("Address: %s\n", category1[i].address);
         printf ("Phone#: %s\n", category1[i].phone);
         printf ("Email Address: %s\n", category1[i].email);
         found = 1;              //search has found the match...
         //break;
      }
  }
  
 for (i = 0; i < n; i++)
      {
      	 if (strcmp(category1[i].address, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n\n", key, i, i+1);
         printf ("\nFollowing are the details:\n");
         printf ("Name: %s\n", category1[i].name);
         printf ("Address: %s\n", category1[i].address);
         printf ("Phone#: %s\n", category1[i].phone);
         printf ("Email Address: %s\n", category1[i].email);
         found = 1;             //search has found the match...
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
if(strcmp(category1[i].name,category1[j].name) >
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

   
