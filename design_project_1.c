// Jaford Burgad
// CS 5900 Summer 2016
// Design Project #2
// Program: To develop a contact list program where the user can search by name or address.

#include <stdio.h>
#include<string.h>

struct text
{
        char artist[30];
        char track[30];
        char genre[30];
        double price;
};

typedef struct text NAME;

NAME  music[30];

void sort(int k);
void database(int k);

int main()
{
    int i, n = 0;
    char res = 'Y';
    char key[30], a[50], b[50], c[50];
    int found = 0;

    FILE *fp;

    fp = fopen("music.txt", "r");

    while (!feof(fp))
    {
        fscanf(fp, "%s[^\n", c);
        strcpy(music[n].artist, c);

        fscanf(fp, "%s[^\n", b);
        strcpy(music[n].track, b);

        fscanf(fp, "%s[^\n", a);
        strcpy(music[n].genre, a);

        fscanf(fp, "%lf",&music[n].price);

         n = n + 1;
    }

    fclose(fp);

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("************************************* PROGRAM START **************************************\n");
    printf("------------------------------------------------------------------------------------------\n\n");

        sort(n);

    printf("MUSIC DATABASE\n");
    printf("\n\tArtist:\t\tTrack:\t\tGenre:\t\tPrice:\n");
    printf("---------------------------------------------------------------------------------------\n\n");

    for(i = 0;i < n; i++)
    {
        printf("%s \t%s \t%s \t$%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);
    }

    printf("\nWould you like to search? ");
    scanf("%c", &res);
    printf("\n");

    while((res == 'y') || (res == 'Y'))
    {
            database(n);

        printf("\nEnter the artist name, track title, or genre: ");
        fflush(stdin);
        scanf("%s", key);

        for (i = 0; i < n; i++)
        {
            if ((strcmp(music[i].artist, key) == 0) || (strcmp(music[i].track, key) == 0) || (strcmp(music[i].genre, key) == 0))
            {
                printf("\nMatch: %s\n", key);
                printf("%s \t%s \t%s \t$%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);

                found = 1;
            }
        }

        if ((!found) || (res == 'n') || (res == 'N'))
            printf("\nSorry %s is not available\n", key);

        printf("\nWould you like to search again? ");
        scanf("%s", &res);
    }

    if((res == 'n') || (res == 'N'))
        printf("\nHave a nice day!\n");

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("************************************** PROGRAM END ***************************************\n");
    printf("------------------------------------------------------------------------------------------\n\n");

return (0);
}

void sort(int k)
{
    int i,j;
    NAME temp;

    for(i = 0; i < k - 1; i++)
    {
        for(j = i + 1; j < k; j++)
        {
            if(strcmp(music[i].artist, music[j].artist) > 0)
            {
                temp = music[i];
                music[i] = music[j];
                music[j] = temp;
            }
        }
    }
}

void database(int k)
{
    int i;
    char disp;

    printf("\nWould you like to display the database? ");
    scanf("%c", &disp);
    printf("\n");

    if((disp == 'Y') || (disp == 'y'))
    {
        for(i = 0;i < k; i++)
        {
            printf("MUSIC DATABASE\n");
            printf("\n\tArtist:\t\tTrack:\t\tGenre:\t\tPrice:\n");
            printf("---------------------------------------------------------------------------------------\n\n");
            printf("%s \t%s \t%s \t$%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);
        }
    }
}
