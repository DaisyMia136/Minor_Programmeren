#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
// function prototypes

//main script
int main(void)
{
    // set defaults
    char input1 = get_char("");
    printf("%include", input1);
    if (isdigit(input1) == true)
    {
        printf("jippie my code works");
    } 
    else
    { 
        printf("keep it up");
    } 
} 