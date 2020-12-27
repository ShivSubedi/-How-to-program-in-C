//kroger4.c
// Kroger shopping
// Modular program w/arrays
// CS5900 Summer 2016 by Shastri
// The order in which each function is invoked is important!!
#include <stdio.h>
#define n 10                                    //size of the array ......
void greetings();
double Calculate_Bill(double price[], int q[],int b);
void Shopping_bill(int num, double tot);
void display_list(double price[], int qty[], double icost[], char item[][20], int i ); //Its role?
int main()
{
    int k, qty[n], i = 0;
    double price[n], itemcost[n], total = 0.0;
    char item[n][20];
    price[0] = 1.0;
        greetings();
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
            itemcost [i] = Calculate_Bill(price, qty, i);
    total += itemcost[i];
        i++;
    } while (price[i] >= 0.0);
    printf("\n------ Displaying your shopping Cart ------------------ \n");
        display_list(price, qty, itemcost, item, i);      
        Shopping_bill(i, total);
    return 0;
}
void greetings()
{
printf("\n*************** WELCOME to Kroger ******************\n");
printf("\n-------------- Start your Shopping .... ------------\n");
//Page 1
//kroger4.c
printf("\nIf you didn't buy or stop buying enter -1 for Price!\n");
}
double Calculate_Bill(double price[], int q[], int b)
{
double cost;
 cost = (price[b] * q[b]);
   return (cost);
}
void display_list(double price[], int qty[], double itemcost[], char item[][20], int i )
{
int k;
for (k = 0; k < i; k++)
              printf("\n\t$%.2f \t %d \t$%.2f \t%s", price[k], qty[k], itemcost[k], item[k]);
}
void Shopping_bill(int num, double tot)
{
printf("\n\nTotal items purchased: %d ", num);
    printf("\nYour total shooping cost = $%.2f today! \n", tot);
    printf("\n************** Thanks for shopping at Kroger **************** \n");
}
