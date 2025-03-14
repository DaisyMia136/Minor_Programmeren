#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char *strdup_(char *string);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc == 1)
    {
        printf("not enough input arguments");
    }
    
    char *new_string = strdup_(argv[1]);
    
    
    // free requested memory 
    int lenght = strlen(argv[1]);
    free(new_string);
}

// functions
char *strdup_(char *string)
{
    // calc strlen of string
    int lenght = strlen(string);
    
    // get memory from malloc | new_string is a string a length of string
    char *new_string = malloc(lenght + 1);
    
    // loop through string and add pointers from new_string to string letter
    for (int i = 0; i < lenght; i++)
    {
        new_string[i] = string[i];
    }
    
    return new_string;
    
    

    
}
