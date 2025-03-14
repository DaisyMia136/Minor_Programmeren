#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char * strcat_(char * string_1, char *string_2);

// main script
int main(int argc, char *argv[])
{
    // input check
    if (argc < 2)
    {
        printf("not enough input argumnets");
    }
    
    char *combined_string = strcat_(argv[1], argv[2]);
    
}

// functions
char * strcat_(char * string_1, char *string_2)
{
    // calc strlen of both strings
    int lenght_1 = strlen(string_1);
    int lenght_2 = strlen(string_2);
    int output_lenght = lenght_1 + lenght_2;
    //printf("%i", lenght_1);
    //printf("%i", lenght_2);
    //printf("%i", output_lenght);   

    
    // initialise output_string
    char output_string[(lenght_1 + lenght_2 - 1)];
    for (int j = 0; j < lenght_1 + lenght_2; j++)
    {
        output_string[j] = '*';
    }
    output_string[lenght_1 + lenght_2 + 1] = '\0';
    
    //printf("%s\n", output_string);
    
    // loop through string_1 until \0 is found
    int i = 0;
    while (string_1[i] != '\0')
    {
        // paste letters to output_string
        output_string[i] = string_1[i];
        i++;
    }

    
    for (int letter = 0; letter < lenght_2; letter++ && i++)
    {
        output_string[i] = string_2[letter];
    }
    
    printf("%s\n", output_string);        
    // loop through string_2
        // paste letters to output_string (from when string 1 left of)
        
        
    // return output string
    return string_1;
}

