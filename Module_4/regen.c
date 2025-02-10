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
    int eternally = 1;
    
    input = get_int("Hoevoel: ");
    if (input == 999)
    { 
        printf("Dat kan niet");
    } 
    while(eternally == 1)
        { 
            if (input != 999)
            { 
                aantal_dagen++;
                regen = regen + input;
                input = get_int("Hoevoel: ");
            } 
            else 
            { 
                eternally = 2;
            } 
            
        }
    
    int totaal_regen = regen;
    printf("%i\n", totaal_regen);
}    

// functions

// ask input 

// calculate average
