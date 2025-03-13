#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// function prototypes
void strfry_(char *string);

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
    
    
    
    