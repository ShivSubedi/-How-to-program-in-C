// Jaford Burgad
// Quiz 2: Problem 1
// CS 5900 Summer 2016
// Program: To read in an input file for a Pet Smart Independence Day sale and output various quantities.

#include <stdio.h>
#include <string.h>

int sort_qoh(int i, int j, int n, int qoh[], char itemid[], double price[]);
double sort_price(int i, int j, int n, int qoh[], char itemid[], double price[]);

int main()
{
    char c[50],itemid[10][50];
    int qoh[10], tot_qoh = 0;
    double price[10], item_cost[10];
    double tot_cost = 0.0;
    int i = 0, j = 0, n = 0;

    FILE *fp;
    fp = fopen("pot_smart.txt", "r");

    while (!feof(fp))
        {
            fscanf(fp,"%s[^\n]",c);
            strcpy(itemid[n],c);

            fscanf(fp, "%d", &qoh[n]);
            fscanf(fp, "%lf", &price[n]);

            n = n + 1;
        }

    fclose(fp);

    n = n - 1;

    for (i = 0; i < n ; i++)
        {
            item_cost[i] = qoh[i] * price[i];
            tot_cost = tot_cost + item_cost[i];
            tot_qoh = tot_qoh + qoh[i];
        };

    printf("\n**************** DATA INPUT ****************\n\n");
    printf("\tQty\tPrice\tCost\tName\n");

    for (i = 0; i < n; i++)
          printf("\n\t%s\t%d\t$%.2f\t$%.2f", itemid[i], qoh[i], price[i], item_cost[i]);

    printf("\nTotal Quantity On Hand: %d\n", tot_qoh);
    printf("\n\nTotal Inventory Value: $%.2f\n", tot_cost);

    //Sorting Algorithm




    printf("\n***************** SORTED DATA (by price) ***************\n");

    sort_price(i, j, n, qoh, itemid, price);

    printf("\n***************** SORTED DATA (by quantity) ***************\n");

    sort_qoh(i, j, n, qoh, itemid, price);

    printf("\nMax quantity on hand: %d", sort_qoh);
    printf("\nMin item price: $%.2f", sort_price);

return(0);
}

int sort_qoh(int i, int j, int n, int qoh[], char itemid[], double price[])
{
    int temp;
    int max_qoh;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (qoh[i] > qoh[j])
            {
                temp = qoh[i];
                qoh[i] = qoh[j];
                qoh[j] = temp;
            }
        }

        printf("\n\t%s\t%d\t$%.2f", itemid[i], qoh[i], price[i]);

    }

    max_qoh = qoh[n-1];
    return (max_qoh);
}

double sort_price(int i, int j, int n, int qoh[], char itemid[], double price[])
{
    double temp;
    double min_price;

    for (i = 0; i < n - 1; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (price[i] > price[j])
            {
                temp = price[i];
                price[i]= price[j];
                price[j]= temp;
            }
        }

        printf("\n\t%s\t%d\t$%.2f", itemid[i], qoh[i], price[i]);
    }

    min_price = price[0];
    return (min_price);
}
