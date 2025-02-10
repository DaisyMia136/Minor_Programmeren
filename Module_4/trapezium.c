#include <stdio.h>
#include <string.h>
#include <cs50.h>

// functions prototypes
void print_trapezium(int height);
void print_space(int input_space);
void print_hash(int input_hash);

// main script
int main(void)
{
    // ask for height of print_trapezium
    int height = get_int("Hoe hoog moet het trapezium zijn? ");
    if(height < 5 || height > 20)
    { 
        height = get_int("Hoe hoog moet het trapezium zijn? ");
    } 
    
    print_trapezium(height);
 
}

// functions 

// print trapezium
void print_trapezium(height)
{
    // set base of trapezium
    int lenght_trapezium = height * 2;
    // set counters
    int outer_spaces = height;
    int inner_spaces = 8; // maybe unnecessary
    
    // print each row
    for(int row = 0; row < height; row++)
    {
        
    }
}


// print a number of spaces
void print_space(int input_space)
{
    for(int space_counter = 0; space_counter < input_space; space_counter++)
    {
        printf(" ");
    }
}

// print a number of #
void print_hash(int input_hash)
{
    for(int hash_counter = 0; hash_counter < input_hash; hash_counter++)
    {
        printf("#");
    }
}