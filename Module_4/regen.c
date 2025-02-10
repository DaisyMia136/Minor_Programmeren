#include <stdio.h>
#include <string.h>
#include <cs50.h>

// function prototypes
void average_rain(int totaal_regen, int aantal_dagen);

// main script
int main(void)
{ 
    // ask input 
    // set defaults
    int regen = 0;
    int input = 0;
    int aantal_dagen = 0;
    int eternally = 1;
    
    input = get_int("Hoevoel: ");
    if (input == 999)
    { 
        printf("Dat kan niet\n");
        eternally = 2;
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
                average_rain(totaal_regen, aantal_dagen);
            } 
            
        }
    
    
}    

// functions

// calculate average

void average_rain(int totaal_regen, int aantal_dagen)
{ 
    int gemiddelde = totaal_regen/aantal_dagen;
    printf("Gemiddeld %i millimeter\n", gemiddelde);
} 



