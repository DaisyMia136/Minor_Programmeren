#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

// main script
int main(void)
{
    // ask for input
    input = get_string("Geef een morse code: ");
    
    // convert to letters
    morse();
}

// functions 
// convert input to text 