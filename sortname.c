//sort_name.c
/*
* C program to read N names, store them in the form of an array
* and sort them in alphabetical order. Display the entered names and
* the sorted names in 2 columns side-by-side.
*/
// Shastri - Summer 2016
#include <stdio.h>
#include <string.h>
int main()
{
    char name[10][15], tname[10][15], temp[15];
                                                // the size [15] means maximim 15 characters in the string
                                                // the size [10] means maximum 10 names in the array....
    int i, j, n;
    printf("Enter how many names? ");
        scanf("%d", &n);
        printf("\nOK - Enter %d names: \n\n", n);
    for (i = 0; i < n; i++)
        {
                scanf("%s", name[i]);
                strcpy(tname[i], name[i]);              // make a copy of the string array..................
            }
// implement sorting strings.................an algorithmic approach............
            for (i = 0; i < n - 1 ; i++)
            {
         for (j = i + 1; j < n; j++)
                {
             if (strcmp(name[i], name[j]) > 0) //> sign for arranging in ascending order
              {
                  strcpy(temp, name[i]);            //copy to swap
                  strcpy(name[i], name[j]);
                  strcpy(name[j], temp);
              }
            }
     }
// display sorted and unsorted names...........
            printf("\n-----------------------------------\n");
            printf("Entered Names\tAlphabetized names\n");
            printf("-----------------------------------\n");
      for (i = 0; i < n; i++)
            {
                printf("%s\t\t%s\n", tname[i], name[i]);
            }
//Page 1
//sort_name.c
            printf("-----------------------------------\n");
      printf("\nOK! DONE!!!\n");
      return 0;
 }
