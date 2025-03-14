#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char *strdup(char *string);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc < 1)
    {
        printf("not enough input arguments");
    }
    
    char *new_string = strdup(argv[1]);
    
        
    // free requested memory 
    int lenght = strlen(argv[1]);
    free(lenght);
}

// functions
char *strdup(char *string)
{
    // calc strlen of string
    int lenght = strlen(argv[1]);
    
    // get memory from malloc | new_string is a string a length of string
    char *new_string = malloc(lenght);
    
    // loop through 
    
    
    
    

    
}
