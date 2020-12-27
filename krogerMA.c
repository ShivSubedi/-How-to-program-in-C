//kroger 3.c
// Kroger shopping
// Modular program w/arrays
// CS5900 Summer 2016 - Shastri
#include <stdio.h>
#define n 10                                    //size of the array ......
void greetings();
double Calculate_Bill(double price[], int q[],int b);
int main()
{
    int k, qty[n], i = 0;
    double price[n], itemcost[n], total = 0.0;
    char item[n][20];
    price[0] = 1.0;
   do
    {
        printf("\nEnter price: $");
        scanf("%lf", &price[i]);
        if (price[i] < 0.0)
            break;
        printf("Enter quantity: ");
        scanf("%d", &qty[i]);
        printf("Enter itemname: ");
        scanf("%s", item[i]);
            itemcost [i] = Calculate_Bill(price, qty, i);    //invoking function.....
    total += itemcost[i];
        i++;
    }  while (price[i] >= 0.0);
    printf("\n------ Displaying your shopping Cart ------------------ \n");
        for (k = 0; k < i; k++)
              printf("\n\t$%.2f \t %d \t$%.2f \t%s", price[k], qty[k], 
itemcost[k], item[k]);
    printf("\n\nTotal items purchased: %d ", i);
    printf("\nYour total shopping cost = $%.2f today! \n", total);
    printf("\n************** Thanks for shopping at Kroger **************** \n");
    greetings();
    return 0;
}
void greetings()
{
printf("\n*************** WELCOME to Kroger ******************\n");
printf("-------------- Start your Shopping .... ----------\n");
}
double Calculate_Bill(double price[], int q[], int b)
{
double cost;
 cost = (price[b] * q[b]);
   return (cost);
}
