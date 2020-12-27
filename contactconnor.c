// Jaford Burgad
// CS 5900 Summer 2016
// Design Project #2
// Program: To develop a contact list program where the user can search by name or address.

#include <stdio.h>
#include<string.h>

struct text
{
        char name[50];
        char location[50];
        char phone[50];
        char email[50];
};

typedef struct text NAME;

NAME  contact[50];

void sort(int k);
void database(int k);

int main()
{
    int i, n = 0, m = 0, x = 0;
    char disp, res = 'Y';
    char key[50], a[50], b[50], c[50], d[50];
    int found = 0;

    FILE *fp;

    fp = fopen("contacts.txt", "r");

    while (!feof(fp))
    {
        fscanf(fp, "%s[^\n", c);
        strcpy(contact[n].name, c);

        fscanf(fp, "%s[^\n", b);
        strcpy(contact[n].location, b);

        fscanf(fp, "%s[^\n", d);
        strcpy(contact[n].phone, d);
        
        fscanf(fp, "%s[^\n", a);
        strcpy(contact[n].email, a);

         n = n + 1;
    }
    
    n = n - 1;

    fclose(fp);

    printf("\n--------------------------------------------------------------------------------------------------\n");
    printf("***************************************** PROGRAM START ******************************************\n");
    printf("--------------------------------------------------------------------------------------------------\n\n");

        sort(n);
        
    printf("  CONTACT LIST\n");
    printf("\n\tName:\t\t\tLocation:\t\tPhone#:\t\tEmail:\n");
    printf("--------------------------------------------------------------------------------------------------\n\n");
        
    for(i = 0;i < n; i++)
    {
	    printf("\t%-20s\t%-20s\t%-15s\t%s\n", contact[i].name, contact[i].location, contact[i].phone, contact[i].email);
	}

    printf("\n  Would you like to search the contact list? ");
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

        printf("\n  Enter the search criteria by name or location: ");
        fflush(stdin);
        scanf("%s", key);

        for (i = 0; i < n; i++)
        {
            if ((strcmpi(contact[i].name, key) == 0) || (strcmpi(contact[i].location, key) == 0))
            {
				if(x == 0)
				{
					printf("\n  MATCH: %s\n", key);
					printf("\n\tName:\t\t\tLocation:\t\tPhone#:\t\tEmail:\n");
    				printf("--------------------------------------------------------------------------------------------------\n\n");
				}	
					
            	printf("\t%-20s\t%-20s\t%-15s\t%s\n", contact[i].name, contact[i].location, contact[i].phone, contact[i].email);
            	found = 1;
            	x++;
        	}
        }

        if (!found)
            printf("\n  Sorry %s is not in the contact list\n", key);

        printf("\n  Would you like to search again? ");
        scanf("%s", &res);
        
        x = 0;
        m++;
    }

    if((res == 'n') || (res == 'N'))
        printf("\n  Have a nice day!\n");

    printf("\n--------------------------------------------------------------------------------------------------\n");
    printf("****************************************** PROGRAM END *******************************************\n");
    printf("--------------------------------------------------------------------------------------------------\n\n");

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
            if(strcmp(contact[i].name, contact[j].name) > 0)
            {
                temp = contact[i];
                contact[i] = contact[j];
                contact[j] = temp;
            }
        }
    }
}

void database(int k)
{
    int i;

    printf("\n");

    printf("  CONTACT LIST\n");
    printf("\n\tName:\t\t\tLocation:\t\t\tPhone#:\t\t  Email:\n");
	printf("---------------------------------------------------------------------------------------\n\n");
        
    for(i = 0;i < k; i++)
    {
	    printf("\t%-20s\t%-20s\t%-15s\t%s\n", contact[i].name, contact[i].location, contact[i].phone, contact[i].email);
    }
    
}
