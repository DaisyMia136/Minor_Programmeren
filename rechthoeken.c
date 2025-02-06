#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
int answer = do_calc(recht1_lengte, recht1_breedte, recht2_lengte, recht2_breedte, calculation_option);



// main function
int main(void)
{
    // Vraag lengte en breedte rechthoek 1 en 2 
    int recht1_lengte = get_int("Lengte 1: ");
    int recht1_breedte = get_int("Breedte 1:" );
    int recht2_lengte = get_int("Lengte 2: ");
    int recht2_breedte = get_int("Breedte 2: ");
    
    // vraag welke optie er uitgevoerd moet worden
    char * calculation_option = get_string("Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? ");
    
    // 
    int answer = do_calc(recht1_lengte, recht1_breedte, recht2_lengte, recht2_breedte, calculation_option)
    
    
}

// functions 