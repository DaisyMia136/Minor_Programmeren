#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

// main script
int main(void)
{
    string input_string = get_string("");
    int input_number = get_int("");
    
    for (int i = 0; i > input_number; i++)
    { 
        printf("%s\n", input_string);
    } 
}


// functions
