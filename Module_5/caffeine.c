#include <stdio.h>
#include <string.h>
#include <cs50.h>

// function prototypes
int gram_to_milligrams(float input);

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
    
    //grams to milligrams
    int input_milli = gram_to_milligrams(input);
    printf("%i")
}


// functions
int gram_to_milligrams(float input)
{ 
    int input_milli = input * 1000;
    return input_milli;
} 

