// Sort numbers.....................
#include <stdio.h>
int main()
{
int i, j, n;
int temp;
int num[20], second[20];
printf("How many numbers you wish to enter? ");
scanf("%d", &n);
for (i = 0; i < n; i++)
  {
        printf("\nEnter the number: ");
        scanf("%d", &num[i]);
  second[i] = num[i];                   // make a copy of the array.................
  }
//  implement the sorting algorithm ................
for (i = 0; i < n - 1; i++)
{
for (j = i+1; j < n; j++)
{
if (num[i] > num[j])
{
temp = num[i];
num[i]= num[j];
num[j]= temp;
}
}
}
printf("\n******* Sorted and Unsorted Array *******\n\n");
for (i = 0; i <n; i++)
    printf("\n\t%d      \t%d", num[i], second[i]);
printf("\n\nAll DONE!! \n");
return 0;
}
