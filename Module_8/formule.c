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
    open_counter = 0;
    end_counter = 0;
    
    // calc length input
    int length = strlen(input);
    
    // loop through characters
    for (int character = 0; character < length && end_counter == 0; character++)
    {
        if(input[character] == ')')
        {
            closed_counter++;
        }
        else if (input[character] == '(')
        {
            open_counter++;
        }
        
        if (closed_counter > open_counter)
        {
            printf("Er wordt een haakje te vroeg gesloten.\n")
            end_counter++;
        }
    }
    
    if (open_counter > closed_counter)
    {
        printf("Er worden te weinig haakjes gesloten.")
    }
}