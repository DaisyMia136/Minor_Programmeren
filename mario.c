#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

// main script
int main(void)
{
    ask_input();
}
// functions

void ask_input()
{ 
    int input = 0;
    do 
    { 
        input = get_int("Positve Number: ");
    } 
    while(input < 0 && input > 8);
} 