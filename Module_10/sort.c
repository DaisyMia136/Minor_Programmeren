// Sorts n numbers and prints them out

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// maximum value of random numbers
#define LIMIT 65536

// maximum array size
#define MAX 65536

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n);

// Sorts array of n values
void sort(int values[], int n);

int main(int argc, string argv[])
{
    // Ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./sort <n>\n");
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 1 || size > MAX)
    {
        printf("Please enter a valid size between 1 and %d\n", MAX);
        return 1;
    }

    // seed the random number generator
    srand48((long int) time(NULL));

    // generate random numbers
    int haystack[size];
    generate_random_numbers(haystack, size);

    // sort the array
    sort(haystack, size);

    // print the sorted array
    for (int i = 0; i < size; i++)
    {
        printf("%i\n", haystack[i]);
    }
}

// Fills array of size n with random numbers
void generate_random_numbers(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // random number between 0 and LIMIT
        arr[i] = (int) (drand48() * LIMIT);
    }
}

// Sorts array of n values
void sort(int values[], int n)
{
    int new_value = 0;
    // loop through values (current value)
    for(int replace_value = 0; replace_value < n; replace_value++)
    {
    //printf("replace counter: %i\n", replace_value);

        // loop through subsequent values (current++)
        for (int next_value = replace_value + 1; next_value < n; next_value++)
        {
            //printf("counter: %i\n", next_value);
            if (values[replace_value] > values[next_value])
            {
                new_value = values[replace_value];
                values[replace_value] = values[next_value];
                values[next_value] = new_value;
                //printf("%i\n", values[replace_value]);
            }
            
            
        }
        //printf("%i ", values[replace_value]);
    }
    return;
}