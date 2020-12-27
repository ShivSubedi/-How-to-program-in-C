// Jaford Burgad
// CS 5900 Summer 2016
// Design Project #1
// Program: To develop a search and sort program to select music by category from a database..

#include <stdio.h>
#include<string.h>

struct text
{
        char artist[50];
        char track[50];
        char genre[50];
        double price;
};

typedef struct text NAME;

NAME  music[50];

void sort(int k);
void database(int k);

int main()
{
    int i, n = 0, m = 0, x = 0;
    char disp, res = 'Y';
    char key[50], a[50], b[50], c[50];
    int found = 0;

    FILE *fp;

    fp = fopen("musicconnor.txt", "r");

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
    
    n = n - 1;

    fclose(fp);

    printf("\n------------------------------------------------------------------------------------------\n");
    printf("************************************* PROGRAM START **************************************\n");
    printf("------------------------------------------------------------------------------------------\n\n");

        sort(n);
        
    printf("  MUSIC DATABASE\n");
    printf("\n\tArtist:\t\t\tTrack:\t\t\tGenre:\t\tPrice:\n");
    printf("------------------------------------------------------------------------------------------\n\n");
        
    for(i = 0;i < n; i++)
    {
	    printf("\t%-20s\t%-20s\t%-15s  $%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);
	}

    printf("\n  Would you like to search? ");
    scanf("%c", &res);

    while((res == 'y') || (res == 'Y'))
    {
    	found = 0;
    	
        if(m != 0)
		{
			printf("\n  Would you like to display the database? ");
    		scanf("%s", &disp);
    		
    		if((disp == 'y') || (disp == 'Y'))
				database(n);		
		}	

        printf("\n  Enter the artist name, track title, or genre: ");
        fflush(stdin);
        scanf("%s", key);

        for (i = 0; i < n; i++)
        {
            if ((strcmpi(music[i].artist, key) == 0) || (strcmpi(music[i].track, key) == 0) || (strcmpi(music[i].genre, key) == 0))
            {
				if(x == 0)
				{
					printf("\n  MATCH: %s\n", key);
					printf("\n\tArtist:\t\t\tTrack:\t\t\tGenre:\t\tPrice:\n");
    				printf("------------------------------------------------------------------------------------------\n\n");
				}	
					
            	printf("\t%-20s\t%-20s\t%-15s  $%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);
            	found = 1;
            	x++;
        	}
        }

        if (!found)
            printf("\n  Sorry %s is not available\n", key);

        printf("\n  Would you like to search again? ");
        scanf("%s", &res);
        
        x = 0;
        m++;
    }

    if((res == 'n') || (res == 'N'))
        printf("\n  Have a nice day!\n");

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

    printf("\n");

    printf("  MUSIC DATABASE\n");
    printf("\n\tArtist:\t\t\tTrack:\t\t\tGenre:\t\tPrice:\n");
	printf("---------------------------------------------------------------------------------------\n\n");
        
    for(i = 0;i < k; i++)
    {
	    printf("\t%-20s\t%-20s\t%-15s  $%.2f\n", music[i].artist, music[i].track, music[i].genre, music[i].price);
    }
    
}
