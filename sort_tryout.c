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

int main(void)
{
    int values[4] = {3,1,0,2};
    sort(values, 4);
}
// Sorts array of n values
void sort(int values[], int n)
{
    // loop through values (current value)
    for(int replace_value = 0; replace_value < n - 1; replace_value++)
    {
        // loop through subsequent values (current++)
        for (int next_value = replace_value + 1; next_value < n; next_value++)
        {
            printf("%i", next_value);
            if (values[replace_value] < values[next_value])
            {
                values[replace_value] = values[next_value];
                printf("%i", values[replace_value]);
            }
            
            
        }
        printf("%i", values[replace_value]);
    }
    return;
}
