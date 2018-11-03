#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#define NUM_COMPLIMENTS 100

void compliments_generator ( int i )
{
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

    fclose (file);
}

int main ()
{
    int index;
    printf ("I have the perfect compliment for you! ");

    srand(time(0));
    index = (rand() % 100) + 1;

    compliments_generator(index);

    return 0;
}