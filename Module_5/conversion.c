#include <stdio.h> 
#include <string.h>
#include <cs50.h>

// function prototypes
void print_table(char unit, int start_temp, int end_temp, int step);

// main script
int main(void)
{
    // ask input 
    // ask unit
    char unit = 'a'; // initiate unit
    do
    { 
        unit = get_char("Welke eenheid van temperatuur (C of F)? ");
    } 
    while (unit != 'c' && unit != 'C' && unit != 'f' && unit != 'F');
    
    // ask start temp, end temp and step size
    int start_temp = 0; 
    int end_temp = 0;
    int step = 0;
    
    start_temp = get_int("Wat is de begintemperatuur? ");
    end_temp = get_int("Wat is de eindtemperatuur? ");
    do 
    { 
        step = get_int("Wat is de stapgrootte? ");
    } 
    while (step <= 0);
    
    // print table
    print_table(unit, start_temp, end_temp, step);
}

//functions 
void print_table(char unit, int start_temp, int end_temp, int step)
{
   
   // print table header 
    if (unit == 'c' || unit == 'C')
    { 
    printf("  C |   F\n");
    // initialize temperatures
    int celcius = start_temp;
    int fahrenheit = 0; 
    while (celcius <= end_temp)
    {
        // convert temparatures
        fahrenheit = (18 * celcius + 320) / 10;
        
        // print temparatures
        printf("%3d | %3d\n", celcius, fahrenheit);
        
        // calculate new celcius
        celcius = celcius + step; 
    }
} 
    else
    { 
        printf("  F |   C\n");
        // calc temp per row 
        int fahrenheit = start_temp;
        int celcius = 0;
          
        while (fahrenheit <= end_temp)
        {
            // convert temparatures
            celcius = (10 * fahrenheit - 320) / 18;
            // print temparatures
            printf("%3d | %3d\n", fahrenheit, celcius);
            // calculate new fahrenheit
            fahrenheit = fahrenheit + step;
        } 
    }
} 
