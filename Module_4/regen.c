#include <stdio.h>
#include <string.h>
#include <cs50.h>

// function prototypes

// main script
int main(void)
{ 
    // set defaults
    int regen = 0;
    int input = 0;
    int aantal_dagen = 0;
    input = get_int("Hoevoel: ");
    while(eternally == 1)
        { 
            input = get_int("Hoevoel: ");
            aantal_dagen++;
            regen = regen + input; 
            
        }
    
    int totaal_regen = regen;
    printf("%i\n", totaal_regen);
}    

// functions

// ask input 

// calculate average
