#include <stdio.h>
#include <string.h>
#include <cs50.h>

// functions prototypes
void print_trapezium(int heigth);
void print_space(int input_space);
void print_hash(int input_hash);

// main script
int main(void)
{
    // ask for height of print_trapezium
    int heigth = get_int("Hoe hoog moet het trapezium zijn? ");
    if(heigth < 5 || heigth > 20)
    { 
        heigth = get_int("Hoe hoog moet het trapezium zijn? ");
    } 
    
    print_trapezium(heigth);
 
}

// functions 

// print trapezium
void print_trapezium
{
    for()
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