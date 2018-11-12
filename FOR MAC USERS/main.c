#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM_COMPLIMENTS 100

int randomS (void)
{
    int i = 0;

    srand(time(0));
    i = (rand() % 101);

    return i;
}
void compliments_generator (int i)
{
    char choice = 0;
    FILE *file;
    struct compliments
    {
        char compliment[120];
    };

    file = fopen("compliments.txt", "r");

    struct compliments franklin[NUM_COMPLIMENTS];

    for ( int n = 0;  n < NUM_COMPLIMENTS;  n++ )
        fgets(franklin[n].compliment, 120, (FILE*) file);

    printf ("%s", franklin[i].compliment);

    while (choice != 'n')
    {
        printf ("\nWould you like another compliment? (Y/N) ");
        scanf (" %1c", &choice);
        choice = tolower(choice);
        switch (choice)
        {
            case 'y':
                //i = random();
                i++;
                printf ("\n%s", franklin[i].compliment);
                break;

            case 'n':
                break;

            default:
                printf ("\nPlease enter either Y or N.\n");
                break;
        }
    }

    fclose (file);
}

int main ()
{
    int index;
    printf ("I have the perfect compliment for you! ");

    //index = random();
    index = 0;
    compliments_generator(index);

    printf ("\nSee you! Have a wonderful day!\n");
    return 0;
}