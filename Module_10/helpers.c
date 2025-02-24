// Helper functions

#include <cs50.h>

#include "helpers.h"

// Sorts array of n values
void sort(int values[], int n) //haystack and size
{
    // TODO: implement an O(n^2) sorting algorithm
    
    // loop through values (current value)
    for(int current_value = 0; current_value < n - 1; current_value++)
    {
        // loop through subsequent values (current++)
        for (int lowest_value = current_value + 1; lowest_value < n; lowest_value++)
        {
            //find lowest value in subsequent values 
            
        // replace current value with lowest value
        values[current_value] = values[lowest_value];
    }
    return;
}
