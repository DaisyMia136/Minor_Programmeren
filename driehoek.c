#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
void print_triangle(int heigth);
void print_space(int input_space);
void print_hash(int input_hash);

// main script
int main(void)
{
   // ask for input_heigth
   int heigth = get_int("Hoe hoog moet de driehoek zijn? ");
   
   // print the triangle
   print_triangle(heigth);
   print_hash(4);
}

// functions
void print_triangle(int heigth)
{
    // print each row
    for(int row = 0; row > heigth; row++)
    {
        
    }
}

void print_space(int input_space)
{
    for(int space_counter = 0; space_counter < input_space; space_counter++)
    {
        printf(" ");
    }
}

void print_hash(int input_hash)
{
    for(int hash_counter = 0; hash_counter < input_hash; hash_counter++)
    {
        printf("#");
    }
}

