
//kroger2.c
// Kroger shopping
// Non-modular program w/arrays
#include <stdio.h>
#define n 10
int main()
{
    int k, qty[n], i = 0;
    double price[n], itemcost[n], total = 0.0;
    char item[n][20];
    price[0] = 1.0;
    while (price[i] > 0.0)
    {
        printf("\nEnter price: $");
        scanf("%lf", &price[i]);
        if (price[i] <= 0.0)
            break;
        printf("Enter quantity: ");
        scanf("%d", &qty[i]);
        printf("Enter itemname: ");
        scanf("%s", item[i]);
            itemcost[i] = (price[i] * qty[i]);
            total += itemcost[i];
        i++;
    }
    printf("\n------ Displaying your shopping Cart ------------------ \n");
        for (k = 0; k < i; k++)
              printf("\n\t$%.2f \t %d \t$%.2f \t%s", price[k], qty[k], itemcost[k], item[k]);
    printf("\n\nTotal items purchased: %d ", i);
    printf("\nYour total shooping cost = $%.2f today! \n", total);
    printf("\n************** Thanks for shopping at Kroger **************** \n");
    return 0;
}
