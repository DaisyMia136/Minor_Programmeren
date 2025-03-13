#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// function prototypes
void strfry_(char *string, int length);

// main script
int main(int argc, char *argv[])
{
    // check input arguments
    if (argc < 1)
    {
        printf("not enough input arguments");
        return 1;
    }

    // calc string length
    int length = strlen(argv[1]);
    char *word = argv[1];
    //printf("%s", word);

    strfry_(word, length);

}

// functions
void strfry_(char *string, int length)
{
    //printf("ik ben hier");
    // randomised seed
    srandom(time(NULL));
   
    // initialise array with length of string
    int random_array[length];
    for (int array = 0; array < length; array++)
    {
        random_array[array] = length + 2;
    }
    
    
    int index_random = 0;
    // fill this array with uniq random numbers between 0 and strlen
    for(int i = 0; i < length; i++)
    {
        // make random number
        index_random = (random() / ((double) RAND_MAX + 1)) * length;
        //printf("new index: %i\n", index_random);
        // check if it is present in the array (while)
        for(int j = 0; j < length; j++)
        {
            //printf("%i", j);
            while (index_random == random_array[j]) // if present generate a new number + start again
            {
                printf("found a double: %i\n", index_random);
                index_random = (random() / ((double) RAND_MAX + 1)) * length;
                //printf("%i", index_random);
                j++;
                if (j == length)
                {
                    j = 0;
                }
            }
        }
        random_array[i] = index_random;
    }

    char new_string[length];
    for (int k = 0; k < length; k++)
    {
        new_string[k] = ' ';
    }
    
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
        printf("%c", new_string[new_character]);
    }
    printf("\n");
}

