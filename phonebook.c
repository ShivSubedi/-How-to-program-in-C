
//Phone_book_files.c
// Phone book simulation...............
// Use of struct and files...............
// Summer 2016
// by Vasant Shastri - OU
#include<stdio.h>
#include<string.h>
struct phonebook
{
char name[10];
int aptnum;
int acode;
int pnum;
};
typedef struct phonebook NAME;
NAME  friends[10], temp[10];            // declare globally ......
void sort(int w);                       /* Function declaration */
int main()
{
 int n = 0,i;
 char res;
 char key[8], c[50];
     int found = 0;
         FILE *fp;
      fp = fopen("phone.txt", "r");     //open the file to read...
    while (!feof(fp))
      {
        fscanf(fp, "%s[^\n", c);
        strcpy(friends[n].name, c);         
        fscanf(fp,"%d",&friends[n].aptnum);
        temp[n] = friends[n];
        fscanf(fp,"%d",&friends[n].acode);
        temp[n] = friends[n];
        fscanf(fp,"%d",&friends[n].pnum);
        temp[n] = friends[n];
          n = n + 1;
    }
       fclose(fp);
  //   n = n - 1;
 /* No need for manual data entry ...... */
 printf("\n*****************************\n");
 printf ("\n     Names before sorting     \n\n");
     /* Print the list of names before sorting */
 for(i = 0;i < n; i++)
//Page 1
//Phone_book_files.c
 {
printf("%s \t%d \t%d  \t%d\n",temp[i].name,temp[i].aptnum,temp[i].acode,temp[i].pnum);
 }
        sort(n);       /* Function call */
 printf("\n*****************************\n");
 printf ("\n     Names after sorting     \n");
 printf("\n*****************************\n\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%s \t%d \t%d  \t%d\n",friends[i].name,friends[i].aptnum,friends[i].acode,friends[i].pnum);
 }
 printf("\n*****************************\n");
 printf("\nWould you like to search? ");
 scanf("%c", &res);
 if ((res == 'y') || (res == 'Y'))
 {
        printf("\nEnter the name to search: \n");
        fflush(stdin); //provides pathway to search any item
        scanf ("%s", key);
        //fflush(stdin);
        //gets(key);
   for (i = 0; i < n; i++)
   {
      if (strcmp(friends[i].name, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n", key, i, i+1);
         printf("\n%d \t%d\n", friends[i].acode, friends[i].pnum);
         found = 1;              //search has found the match...
         break;
      }
   }
   if ((!found)|| (res == 'n') || (res == 'N'))
      printf("\n%s is NOT present in array.\n", key);
      }
     printf("\n** End of Program! ** \n");
 return 0;
}                               /* End of main() */
/* Function to sort the given names */
void sort(int w)
{
 int i,j;
 NAME temp;
 for(i = 0; i < w-1;i++)
 {
for(j = i+1; j < w; j++)
{
if(strcmp(friends[i].name,friends[j].name) >
0 )
{
//Page 2
//Phone_book_files.c
temp    = friends[i];
friends[i] = friends[j];
friends[j] = temp;
}
}
 }
}
//Page 3

