//sort_names.c
//Sorting string array of data in C
#include <stdio.h>
#include <string.h>
int main()
{
   char name[] [15]= {"Monica", "David", "Kip", "John", "Paul", "Nancy", "Drew", "Frank"};
   int i, j, N;
          N = sizeof (name)/sizeof name[0];             // maximum number ofarray elements
   char  Tname[N][15], temp[15];
        printf("\n************ Alphabetized List ***********\n\n");
   for(i=0; i < N ; i++)
   {                  
strcpy (Tname[i], name[i]);                     // make a copy of string array
   }
// implement the sorting algorithm ......................
   for(i=0; i < N -1 ; i++)
   {
for(j=i+1; j < N; j++)
{
   if(strcmpi(name[i],name[j]) > 0)
   {
       strcpy(temp,name[i]);                    // magic three lines of SWAP.......
       strcpy(name[i],name[j]);
       strcpy(name[j],temp);
   }
}
   }
   printf("\n------------------------------------------\n");
   printf("Input Names\tSorted names\n");
   printf("------------------------------------------\n");
   for(i=0; i< N ; i++)
   {
printf("%s\t\t%s\n",Tname[i], name[i]);
   }
   printf("------------------------------------------\n");
   return 0;
}
