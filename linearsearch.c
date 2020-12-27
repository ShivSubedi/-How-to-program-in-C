//linear-search.c
// Linear search ...............
// Summer 2016
// by Shastri, OU
#include <stdio.h>
#include <string.h>
int main()
{
    char target[20];
    int i = 0, num;
    int found = 0;
    char states[][20] = {"Alaska", "Delaware", "Hawaii","Nevada", "Ohio"};
    char city[][20] = { "Anchorage", "Dover", "Honolulu","Reno", "Athens"};
    char zip[][20] = {"99501","19901","96801","89501", "45701"};
        num = sizeof (states)/sizeof states[0];
    printf("Enter the state or city you are searching: ");
    scanf("%s", target);
     while ((!found) && (i < num))
     {
        if ((strcmp(states[i], target) == 0)|| (strcmp(city[i], target) == 0))
            found = 1;
        else
            i++;
     }
    if (found)
        printf("\n%s   zip-code is: %s \n", target,zip[i]);
    else
        printf("\nSorry! %s is not in this list!! \n", target);
    return 0;
}
