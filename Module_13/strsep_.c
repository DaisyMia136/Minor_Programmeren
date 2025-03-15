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
    
    char *new_string = strsep_(argv[1], argv[2]);
    
    printf("%s", argv[1]);
}

// functions
char *strsep_(char *string, char *delimiter)
{
    // check how many character the delimiter is.
    // calc strlen of string
    int length = strlen(string);
    int length_delim = strlen(delimiter);
    char compare[length_delim];
    char segment[length_delim]; 
    
    // loop through string until delimiter is found
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length_delim; j++)
        {
            compare[j] = string[i + j];
            //printf("%c\n", compare[j]);
        }
        printf("%s\n", segment);
        
        // when delimiter is found change current pointer to delimiter pointer + 1
        if (strcmp(compare, delimiter) == 0)
        {
            string[i + length_delim] = '\0';
            //printf("%s", string);
        }
    }
    // return old pointer 
    return string;
}
