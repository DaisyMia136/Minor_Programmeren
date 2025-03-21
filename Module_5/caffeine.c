#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

// function prototypes
int gram_to_milligrams(float input);
void caffeine_calculator(int input_milli);

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
    //printf("%i\n", input_milli);
    
    // calculate caffeine amount + print output
    caffeine_calculator(input_milli);
    
}

// functions
// convert grams to milligrams
int gram_to_milligrams(float input)
{ 
    int input_milli = round(input * 1000);
    return input_milli;
} 

// calculate which drinks make up the inputted caffeine amount
void caffeine_calculator(int input_milli)
{
    // set defaults 
    int drinks_number = 0;
    int espresso_counter = 0;
    int blacktea_counter = 0;
    int greentea_counter = 0;
    int cocoa_counter = 0;
    int chocolate_counter = 0;
    
    while(input_milli > 0)
    { 
        // determine which drink is closest to the input
        if (input_milli >= 70)
        {
            input_milli = input_milli - 70;
            espresso_counter++;
        }
        else if (input_milli >= 30)
        {
            input_milli = input_milli - 30;
            blacktea_counter++;
        } 
        else if (input_milli >= 20)
        {
            input_milli = input_milli - 20;
            greentea_counter++;
        }
        else if (input_milli >= 10)
        { 
            input_milli = input_milli - 10;
            cocoa_counter++; 
        } 
        else if (input_milli >= 1)
        {
            input_milli = input_milli - 1;
            chocolate_counter++;
        }   
    } 
    // print the number of individual drinks 
        printf("%i espresso\n", espresso_counter);
        printf("%i black tea\n", blacktea_counter);
        printf("%i green tea\n", greentea_counter);
        printf("%i cocoa\n", cocoa_counter);
        printf("%i piece of chocolate\n", chocolate_counter);
    
    // print the total number of drinks
        drinks_number = espresso_counter + blacktea_counter + greentea_counter + cocoa_counter;
        if (drinks_number == 1)
        { 
            printf("That makes 1 drink in total\n");
        } 
        else 
        { 
            printf("That makes %i drinks in total\n", drinks_number);
        } 
    
}
