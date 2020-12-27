//Quiz4prob1
//SHIV SUBEDI (Cs 5900)
#include <stdio.h>
#include <string.h>
void ComputeCost(double cost[], int n, double *TC );
void computeqty(int qty[], int n, int *tqty);
int main()
{
    FILE *fp;
    char c[50],itemname[10][50], temp1 [50];
    int qty[10], temp2;
    double price[10], cost[10];
    double totalcost = 0.0, temp;
    int tqty = 0;
    int i, n = 0;
    int j = 0;
        fp = fopen("pot_smart.txt", "r");     //open the file to read...
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
                        ComputeCost(cost, n, &totalcost); 
						computeqty(qty, n, &tqty);                      // invoke to find total cost.............
    printf("\nDisplaying your Shopping details...\n\n");
    printf("Item-ID    \tOn-Hand \tPrice \t\t\tItem_Cost \n");
    for (i = 0; i < n; i++)
          printf("\n %s \t\t%d  \t\t$ %.2f  \t\t$ %.2f ",itemname[i], qty[i], price[i], cost[i]);
    printf("\n\nTotal inventory Cost = $%.2f\n", totalcost);
    printf ("\n Total QOH of the store = $%d\n",tqty);
    for (i = 0; i < n - 1; i++)
{
for (j = i+1; j < n; j++)
{
if (price[i] > price[j])
{
temp = price[i];
price[i]= price[j];
price[j]= temp;
strcpy(temp1, itemname[i]);                    // magic three lines of SWAP.......
strcpy(itemname[i],itemname[j]);
strcpy(itemname[j],temp1);
temp2 = qty[i];
qty[i]= qty[j];
qty[j]= temp2;

}
}
}
printf("\n******* Ascending sorting of table on price basis: *******\n\n");
 printf("Item-ID    \tOn-Hand \tPrice \n");
for (i = 0; i <n; i++)
    printf(" %s \t\t%d  \t\t$ %.2f\n ",itemname[i], qty[i], price[i]);
    printf ("Max price is $%.2f and Min price is $%.2f", price[n-1], price[0]);
    for (i = 0; i < n - 1; i++)
	{
for (j = i+1; j < n; j++)
{
if (qty[i] > qty[j])
{
temp2 = qty[i];
qty[i]= qty[j];
qty[j]= temp2;
temp = price[i];
price[i]= price[j];
price[j]= temp;
strcpy(temp1, itemname[i]);                    // magic three lines of SWAP.......
strcpy(itemname[i],itemname[j]);
strcpy(itemname[j],temp1);


}
}
}
printf("\n******* Ascending sorting of table on quantity basis: *******\n\n");
 printf("Item-ID    \tOn-Hand \tPrice \n");
for (i = 0; i <n; i++)
    printf(" %s \t\t%d  \t\t$ %.2f\n ",itemname[i], qty[i], price[i]);
    printf ("Max quantity is $%d and Min quantity is $%d", qty[n-1], qty[0]);
    return 0;
}
void ComputeCost(double cost[], int n, double *TC)
{
int i;
double totcost = 0.0;
 for (i = 0; i < n ; i++)

             totcost = totcost + cost[i];
*TC = totcost;
}
void computeqty(int qty[], int n, int *tqty)
{
	int i;
	int totqty=0;
	for (i=0; i<n; i++)
	totqty = totqty + qty[i];
	*tqty = totqty;	
}

