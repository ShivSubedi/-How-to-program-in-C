
//Phone_book.c
//Phone book simulation...............
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
struct phonebook  friends[10], temp[10];                // declare as global variable
void sort(int W);             /* Function declaration */
int main()
{
 int n,i;
 char res = 'Y';
 char key[8];
     int found = 0;
 fflush(stdin);
 printf("Enter the number of frinds in the list\n");
 scanf("%d",&n);
 for(i = 0; i < n; i++)
 {
 printf("\nEnter the name of friend %d : ", i+1);
 fflush(stdin);
 gets(friends[i].name);
 printf("Enter the apartment number: ");
 scanf("%d",&friends[i].aptnum);
 temp[i] = friends[i];
 printf("Enter the area code: ");
 scanf("%d",&friends[i].acode);
 temp[i] = friends[i];
 printf("Enter the 4-digit phone#: ");
 scanf("%d",&friends[i].pnum);
 temp[i] = friends[i];
 }
 printf("\n*****************************\n");
 printf ("\n     Names before sorting     \n\n");
     /* Print the list of names before sorting */
 for(i = 0;i < n; i++)
 {
printf("%s \t%d \t%d  \t%d\n",temp[i].name,temp[i].aptnum,temp[i].acode,temp[i].pnum);
 }
//Page 1
//Phone_book.c
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
 scanf("%\nc", &res);
 if ((res == 'y') || (res == 'Y'))
 {
        printf("\nEnter the name to search: \n");
        fflush(stdin);
        gets(key);
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
}                                       /* End of main() */
/* Function to sort the given names */
void sort(int W)
{
 int i,j;
 struct phonebook temp;
 for(i = 0; i < W-1;i++)
 {
for(j = i+1; j < W; j++)
{
if(strcmp(friends[i].name,friends[j].name) > 0 )
{
temp    = friends[i];
friends[i] = friends[j];
//Page 2
//Phone_book.c
friends[j] = temp;
}
}
 }
}
//Page 3

