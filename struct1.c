
//search_struct_person.c
//Sorting string data using structure...........
// ET2100 Summer 2016
// Dr. Vasant Shastri - OU
#include<stdio.h>
#include<string.h>
struct person
{
char name[10];
int ID;
double score;
};
typedef struct person NAME;
NAME  student[10], temp[10];
      char key[10];
      int found = 0;  
 void sort1(int W);             // Function declaration  to sort by name
 void sort2(int W);             // to sort by scores .............
int main()
{
 int n,i;
 char res = 'Y';
 //fflush(stdin);                 // this is optional! May NOT work on UNIX compilers.........
 printf("Enter the number of students in the list\n");
 scanf("%d",&n);
 for(i = 0; i < n; i++)
 {
 printf("\nEnter the name of student %d : ", i+1);
 fflush(stdin);
 gets(student[i].name);
 printf("Enter the Student ID of %d : ", i+1);
 scanf("%d",&student[i].ID);
 temp[i] = student[i];
 printf("Enter the test score of %d : ", i+1);
 scanf("%lf",&student[i].score);
 temp[i] = student[i];
 }
 printf("\n*****************************\n");
 printf ("\n     Names before sorting     \n\n");
     /* Print the list of names before sorting */
 for(i = 0;i < n; i++)
 {
printf("%-10s\t%3d \t%.2f\n",temp[i].name,temp[i].ID,temp[i].score );
 }
                sort1(n);                       /* Function call to sort by 
name */
 printf("\n*****************************\n");
//Page 1
//search_struct_person.c
 printf ("\n     Sorting by Names     \n");
 printf("\n*****************************\n\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%-10s\t%3d \t%.2f\n",student[i].name,student[i].ID,student[i].score );
 }
                sort2(n);                       // sort by test score .....
  printf("\n*****************************\n");
 printf ("\n     Sorting by Price     \n");
 printf("\n*****************************\n\n");
     /* Display the sorted names */
 for(i = 0;i < n; i++)
 {
printf("%-10s\t%3d \t%.2f\n",student[i].name,student[i].ID,student[i].score );
}
 printf("\n*****************************\n");
 printf("\nWould you like to search? ");
 scanf("%\nc", &res);
 if ((res == 'y') || (res == 'Y'))
 {
        printf("\nEnter the name to search: \n");
        fflush(stdin);
        gets(key);
// implement linear search ...............
   for (i = 0; i < n; i++)
   {
      if (strcmp(student[i].name, key) == 0)
      {
         printf("\n%s is present at index %d, means position %d\n", key, i, i+1);
 printf("%s has the score %5.2f \n", key,student[i].score );        
         found = 1;              //search has found the match...
         break;
      }         
   }
   if ((!found)|| (res == 'n') || (res == 'N'))
      printf("\n%s is NOT present in array.\n", key);
      }
     printf("\n** End of Program! ** \n");            
 return 0;
}          /* End of main() */
/* Function to sort the given names */
void sort1(int W)
{
 int i,j;
 NAME temp;
//Page 2
//search_struct_person.c
 for(i = 0; i < W-1;i++)
 {
for(j = i+1; j < W; j++)
{
if(strcmp(student[i].name,student[j].name) >
0 )
{
temp    = student[i];
student[i] = student[j];
student[j] = temp;
}
}
 }
} 
void sort2(int W)                       // function to sort by test scores ...........
{
 int i,j;
 NAME temp;
 for(i = 0; i < W-1;i++)
 {
for(j = i+1; j < W; j++)
{
if(student[i].score > student[j].score )
{
temp    = student[i];
student[i] = student[j];
student[j] = temp;
}
}
 }
} 
//Page 3

