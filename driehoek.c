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
   
}

// functions
// print driehoek
void print_triangle(int heigth)
{
    // set counters
    int outer_spaces = heigth;
    int inner_spaces = -2;
    // set base of the pyramid
    int triangle_length = heigth * 2;
    printf("%i", triangle_length);
    // print each row
    for(int row = 0; row < heigth; row++)
    {
        outer_spaces = outer_spaces - 1;
        inner_spaces = inner_spaces + 2;
        printf("%i\n", outer_spaces);
        print_space(outer_spaces);
        //print_hash();
        //print_space(inner_spaces);
        //print_hash();
        //print_space(outer_spaces); // misschien onnodig
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

