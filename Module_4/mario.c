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
    while(input < 1 || input > 8);
    return input;
} 

// build_pyramid
void build_pyramid(int input)
{
    // set counters and defaults
    int counter_hash = 0;
    int counter_space = input;
    for(int row = 0; row < input; row++) // repeat through the rows
    {
        // calculate how many # and spaces are needed per row
        counter_hash = counter_hash + 1; // 0 + 1 for row 1 
        counter_space = counter_space - 1; // input - 1 for row 1
        
        // print the number of spaces of the first pyramid
        
        for(int col_space = 0; col_space < counter_space; col_space++) 
        { 
            printf(" ");
        } 
        
        // print the number of # of the first pyramid
        for(int col_hash = 0; col_hash < counter_hash; col_hash++)
        {
            printf("#");    
        }
        
        // print two spaces
        for(int space = 0; space < 2; space++)
        {
            printf(" ");
        }
        
        // print the number of # of the second pyramid
        for(int col_hash = 0; col_hash < counter_hash; col_hash++)
        {
            printf("#");    
        }
        
        // print a new line after each row
        printf("\n");
    }
    
}