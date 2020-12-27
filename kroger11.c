
//Kroger11.c
// Kroger shopping w/struct ...................
//
/* A classic program illustrating:
   How to define a structure
   How to declare a varible of type the structure you defined
   How to assign a vlaue to the fields of the structure type variable
   How to display with printf()
--> Use this program as a blueprint to programming in C with structures....
*/
#include <stdio.h>
#include <string.h>
struct KrogerShop
{
    char itemname[10][30];                      //define a structure for Kroger shopping ...........
    int qty[10];
    double price[10];
};
int main()
{
    struct KrogerShop KJ;                       //declare variable KJ of the type struct defined above!!
    FILE *fp;
    double cost[10];
    double totalcost = 0.0;
    int i, n = 0;
      fp = fopen("kroger3.txt", "r");     //open the file to read...
    while (!feof(fp))
   {
        fscanf(fp, "%s[^\n", KJ.itemname[n]);
        fscanf(fp, "%d", &KJ.qty[n]);
        fscanf(fp, "%lf", &KJ.price[n]);
n = n + 1;
    }
       fclose(fp);
    n = n - 1;
       printf("Number of Elements in the file = %d \n\n", n);
        for (i = 0; i < n; i++)
        {
            cost[i]= KJ.qty[i]* KJ.price[i];
            totalcost += cost[i];
        }
    printf("\n\tQty \tPrice \tCost \tItemname   \n\n");
       for (i = 0; i < n; i++)
            printf("%d\t%d \t%5.2f \t%.2f \t%s \n", i+1, KJ.qty[i], KJ.price[i], cost[i], KJ.itemname[i]);
//Page 1
//Kroger11.c
        printf("\nTotal cost = $%.2f \n", totalcost);
    printf("\n************** END of Kroger Shopping!  \n");
    return 0;
}
//Page 2

