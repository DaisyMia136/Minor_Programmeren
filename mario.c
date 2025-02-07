#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

int ask_input();
void build_pyramid();

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
    return input;
} 

// build_pyramid
void build_pyramid(int input)
{
    // set counters and defaults
    int counter_hash = 0;
    int counter_space = input;
    for(int i = 0; i < input; i++)
    {
        
        counter_hash = counter_hash + 1; 
        counter_space = counter_space - 1;
        printf("%i\n", counter_hash);
        printf("%i\n", counter_space);
        
        for int 
        printf("#")
        
    }
    
}