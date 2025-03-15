#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char *strsep_(char *string, char *delimiter);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc < 2)
    {
        printf("not enough input arguments");
    }
    
    
}

// functions
char *strsep_(char *string, char *delimiter)
{
    // check how many character the delimiter is.
    // calc strlen of string
    length = strlen(string);
    length_delim = strlen(delimiter);
    char compare[length_delim 
    
    // loop through string until delimiter is found
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length_delim; j++)
        {
            compare[j] = 
        }
        
        // when delimiter is found change current pointer to delimiter pointer + 1
        if (strcmp(string[i], delimiter[0]) == 0)
        {
            
        }
    }
    // return old pointer 
    
}
