#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
// function prototypes

//main script
int main(void)
{
    // set defaults
    string input1 = get_string("");
    printf("%s", input1);
    if (isdigit(input1) == true)
    {
        printf("jippie my code works");
    } 
    else
    { 
        printf("")
    }
} 