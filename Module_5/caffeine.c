#include <stdio.h>
#include <string.h>
#include <cs50.h>

// function prototypes

// main script
int main(void)
{
    // ask input 
    float input = 0; 
    do 
    { 
        input = get_float("Amount in grams: ");
    } 
    while(input < 0.001);
    
    //
}


// functions

