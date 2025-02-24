// Generates pseudorandom numbers in (0,LIMIT), one per line

#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // Error message if input arguments are incorrect
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // change the inputted seed from a string to an integer
    int n = atoi(argv[1]);

    // TODO: comment me
    if (argc == 3) // if the second option is used
    {
        srand48((long int) atoi(argv[2])); // use the inputted number as a seed 
    }
    else // if the second option is not used
    {
        srand48((long int) time(NULL)); // use the current time as seed
    }

    // TODO: comment me
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // Success
    return 0;
}
