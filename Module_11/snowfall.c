#include <cs50.h>
#include <stdio.h>

// function prototypes
void clear_board(void);

// global variables
    // edges of the board?

// structs 

// main script
int main(void)
{
    
}

// functions 
void clear_board(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}