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
        int counter_hash = 0;
        int count_space = input;
        int number_hash = counter_hash + 1; 
        int number_space = counter_space - 1;
        printf("%i\n", )
        
    }
    
}