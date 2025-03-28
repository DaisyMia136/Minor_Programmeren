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
    
    printf("%s", combined_string);
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
    
    // copy string_1 in new variable
    char str_1[lenght_1];
    for (int str_1_letter = 0; str_1_letter < lenght_1 ; str_1_letter++)
    {
        str_1[str_1_letter] = string_1[str_1_letter];
    }
    // copy string_2 in new variable
    char str_2[lenght_2];
    for (int str_2_letter = 0; str_2_letter < lenght_2 ; str_2_letter++)
    {
        str_2[str_2_letter] = string_2[str_2_letter];
    }


    // combine string_1 and string_2 in string_1
    for (int j = 0; j < output_lenght; j++)
    {
        string_1[j] = '*';
    }
    string_1[lenght_1 + lenght_2 + 1] = '\0'; // because one strend is removed, add on additional strend at the end of the combined string

    // loop through string_1
    int i = 0;
    for (i = 0; i < lenght_1; i++)
    {
        // paste letters to string_1
        string_1[i] = str_1[i];
    }
    // add the first letter of the second word (my loops were rude to me, so I fixed it like this :( )
    string_1[i] = str_2[0];
    i++;

    // loop through string_2 and add it after string_1
    for (int letter = 1; letter <= lenght_2; letter++ && i++)
    {
        // paste letters to output_string (from when string 1 left of)
        string_1[i] = str_2[letter];
    }
    
    // return string_1
    return &string_1[0];
}

