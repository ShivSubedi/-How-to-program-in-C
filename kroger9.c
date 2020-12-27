//Kroger9.c
// Kroger shopping - w/files-arrays..
// ET2100 Summer 2016
// Program using arrays & files ........modular .......
#include <stdio.h>
#include <string.h>
void ComputeCost(double cost[], int n, double *TC );
int main()
{
    FILE *fp;
    char c[50],itemname[10][50];
    int qty[10];
    double price[10], cost[10];
    double totalcost = 0.0;
    int i, n = 0;
    int j = 0;
        fp = fopen("kroger3.txt", "r");     //open the file to read...
   while (!feof(fp))
    {
        fscanf(fp,"%s[^\n]",c);
            strcpy(itemname[n],c);       //copy the buffer to string array
        fscanf(fp, "%d", &qty[n]);
        fscanf(fp, "%lf", &price[n]);
          n = n + 1;
    }
       fclose(fp);
       n = n - 1;                    //update value of data sets from file
    printf("\n==> Data accessed from the input file.....\n");
                 for (i = 0; i < n ; i++)
                cost[i] = qty[i] * price[i];                    // compute itemcost ............
                        ComputeCost(cost, n, &totalcost);                       // invoke to find total cost.............
    printf("\nDisplaying your Shopping details...\n\n");
    printf("   \tQty    \tPrice \tCost \tName \n");
    for (i = 0; i < n; i++)
          printf("\n %d  \t%d  \t%.2f  \t%.2f  \t%s", i + 1 , qty[i], price[i], 
cost[i], itemname[i]);
    printf("\n\nTotal Shopping Cost = $%.2f\n", totalcost);
    return 0;
}
void ComputeCost(double cost[], int n, double *TC)
{
int i;
double totcost = 0.0;
 for (i = 0; i < n ; i++)
//Page 1
//Kroger9.c
             totcost = totcost + cost[i];
*TC = totcost;
}
