// Quiz prob2
//SHIV SUBEDI (CS5900)
#include <stdio.h>
#include <string.h>
int main()
{
    char target[20];
    int i = 0, num;
    int found = 0;
    char states[][15] = {"Delaware", "Maryland", "Georgia","Alabama", "Tennessee", "Ohio", "Indiana", "Wisconsin", "Kansas", "Oklahoma", "Texas", "Colorado","Nevada", "Hawaii", "Alaska" };
    char zip[][15] = {"19901","21201","30301","35801", "37201", "45701", "46201", "53201", "67201", "74101", "78701", "80201", "89501", "96801", "99501"};
        num = sizeof (states)/sizeof states[0];
    printf("Enter the state or city you are searching: ");
    scanf("%s", target);
     while ((!found) && (i < num))
     {
        if ((strcmp(states[i], target) == 0))
            found = 1;
        else
            i++;
     }
    if (found)
        printf("\n%s   zip-code is: %s \n", target,zip[i]);
    else
        printf("\nSorry! %s is not found!! \n", target);
    return 0;
}
