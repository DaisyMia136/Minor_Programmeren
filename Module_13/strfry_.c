#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// function prototypes
char * strfry_(char *string);

// main script
int main(int argc, char *argv[])
{
    // check input arguments
    if (argc < 1)
    {
        printf("not enough input arguments");
        return 1;
    }

    
    // randomised seed
    srandom(time(NULL));
    char *word = argv[1];
    //printf("%s", word);

    word = strfry_(word);
    printf("%s", word);

}

// functions
char * strfry_(char *string)
{
    // calc string length
    int length = strlen(string);
    // initialise array with length of string
    int random_array[length];
    int index_random = 0;

    for (int array = 0; array < length; array++)
    {
        random_array[array] = length + 2;
        //printf("%i", random_array[array]);
    }
    
    // fill this array with uniq random numbers between 0 and strlen - 1
    for(int i = 0; i < length; i++)
    {
        // make random number between 0 and length
        index_random = (random() / ((double) RAND_MAX + 1)) * length;
        //printf("new index: %i\n", index_random);
        // check if it is present in the array (while)
        for(int j = 0; j < length; j++)
        {
            if (j == 0)
            {
                j = 1;
            }
            if (index_random == random_array[j - 1]) // if present generate a new number + start again
            {
                //printf("found a double: %i\n", index_random);
                index_random = (random() / ((double) RAND_MAX + 1)) * length;
                //printf("%i", index_random);
                j = 0;
            }
        }
        random_array[i] = index_random;
    }

    char new_string[length];
    for (int k = 0; k < length; k++)
    {
        new_string[k] = ' ';
    }
    new_string[length] = '\0';
    
    //printf("%s", new_string);

    // check if array contains uniq numbers
    // for(int k = 0; k < length; k++)
    // {
    //     printf("%i", random_array[k]);
    // }

    // initialise variables in the loop
    int new_index = 0;

    // assign character pointers to new indexes
    for (int new_character = 0; new_character < length; new_character++)
    {
        // get new index from the array
        new_index = random_array[new_character];
        //printf("%i", new_index);
        //printf("%c\n", string[new_character]);
        new_string[new_character] = string[new_index];
        //printf("%c", new_string[new_character]);
    }
    
    string = new_string;
    return string;
}

