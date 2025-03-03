#include <cs50.h>
#include <stdio.h>

// function prototypes

// global variables

// main script
int main(void)
{
    
}

// functions 
void clear_screen(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}