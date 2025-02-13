#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
void morse(string input); 

// main script
int main(void)
{
    // ask for input
    string input = get_string("Geef een morse code: ");
    
    // convert to letters
    morse(input);
}

// functions 
// convert input to text 
void morse(string input)
{
    int input_length = (strlen(input) - 1)/3;
    printf(input_length)
}