#include <cs50.h>
#include <stdio.h>

// functions prototypes

// main script
int main(void)
{
    // TODO: prompt for start size, not lower than 9
    int start_population; 
    do 
    {
        start_population = get_int("Start size: ");
    } 
    while(start_population < 9);
    
    // TODO: prompt for end size

int end_population; 
    do 
    {
        end_population = get_int("End size: ");
    } 
    while(end_population < start_population);
    // TODO: calculate number of years until we reach threshold

    // TODO: print number of years
}

// functions