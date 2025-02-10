#include <cs50.h>
#include <stdio.h>

// functions prototypes
int llama_calc(int start_population, int end_population);

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

    int years = llama_calc(start_population, end_population);

    // TODO: print number of years
    printf("Years: %i\n", years);
}

// functions
int llama_calc(int start_population, int end_population)
{
    int llama_babies = 0;
    int llama_deaths = 0;
    int years = 0;
    
    while(start_population < end_population)
    {
        llama_babies = start_population / 3; 
        llama_deaths = start_population / 4;
        
        start_population = start_population + llama_babies - llama_deaths; 
        printf("Current population is: %i\n", start_population);
        years++;
    } 
    return years;
}