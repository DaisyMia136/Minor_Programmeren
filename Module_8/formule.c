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
    // initial variables
    closed_counter = 0;
    
    // calc length input
    int length = strlen(input);
    
    // loop through characters
    for (int character = 0; character < length; character++)
    {
        if(input[character] == ')')
        {
            closed_counter++;
        }
        else if (input[character] == '(')
        {
            open_counter++;
        }
    }
}