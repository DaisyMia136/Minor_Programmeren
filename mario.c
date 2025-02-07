#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

int = ask_input();
void build_pyramid()

// main script
int main(void)
{
    // ask the user to input a number between 1 and 8
    int input = ask_input();
    
    build_pyramid(input);
    
}
// functions
// ask input
int ask_input()
{ 
    int input = 0;
    do 
    { 
        input = get_int("Positve Number: ");
    } 
    while(input < 0 || input > 8);
} 

// build_pyramid
void build_pyramid(int input)
{
    for(int i = 0; i < input; i++)
    {
        int counter = 1;
        int number_hash = input - counter; 
        int number_space = 
    }
    
}