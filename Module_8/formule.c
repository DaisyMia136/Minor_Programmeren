#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void bracket_checker(string input);


// main script
int main(void)
{
    // ask input 
    string input = get_string("Geef een formule: ");
    
    // haakjes checker
    bracket_checker(input);
}

//functions
void bracket_checker(string input)
{
    while letter < strlen(input)
}