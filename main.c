#include <stdio.h>
#include <string.h>
#include <time.h>
#define NUM_COMPLIMENTS 3

void compliments_generator ( int i )
{
    struct compliments
    {
        char compliment[30];
    };

    struct compliments franklin[NUM_COMPLIMENTS] = {
        {
            .compliment = "You are beautiful!",
        },
        {
            .compliment = "You have a great personality.",
        },
        {
            .compliment = "You are smart!",
        },
    };

    printf ("%s\n", franklin[i].compliment);
    printf ("\n");
}

int main ()
{
    int index;
    printf ("I have the perfect compliment for you!");

    srand(time(0));
    index = (rand() % 2) + 1;

    compliments_generator(index);

    return 0;
}