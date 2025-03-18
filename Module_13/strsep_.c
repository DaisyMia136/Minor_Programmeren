#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char *strsep_(char **string, char *delimiter);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc < 2)
    {
        printf("not enough input arguments");
    }
    
    argv[1] = strsep_(&argv[1], argv[2]);
    printf("%s", argv[1]);
}

// functions
char *strsep_(char **string, char *delimiter)
{
    // check how many character the delimiter is.
    // calc strlen of string
    int length = strlen(string[0]);
    int length_delim = strlen(delimiter);
    //char *new_string = NULL;
    int new_token = 0;
    
    // loop through string until delimiter is found
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length_delim; j++)
        {
            // when delimiter is found change current pointer to delimiter pointer + 1
            if (string[0][i] == delimiter[j])
            {
                string[0][i] = '\0';
                new_token = i + 1; 
                string[1][0] = string[1][new_token];
                i = length;

            }
        }
    }
    if(new_token > 0)
    {
        // return pointer to new pointer 
        return &string[0][0];
    }
    else 
    {
        return NULL;
    }
}
