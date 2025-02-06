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
    
    // Doe de berekening met de ingevoerde opties en gegevens
    int answer = do_calc(recht1_lengte, recht1_breedte, recht2_lengte, recht2_breedte, calculation_option);
    
    
}

// functions 
int answer do_calc(recht1_lengte, recht1_breedte, recht2_lengte, recht2_breedte, calculation_option)
{
    int opp_1 = int recht1_lengte * int recht1_breedte; // bereken oppervlakte van t eerste rechthoek
    int opp_2 = int recht2_lengte * int recht2_breedte; // bereken oppervlakte van t tweede rechthoek
    
    if (char * calculation_option == "1"  || calculation_option == "S") 
    {
        return opp_1;
    } 
    else if (calculation_option == "2" ) 
    {
        return opp_2;
    }
    else if (calculation_option == S) // bereken de som van de twee rechthoeken
    {
        int answer = opp_1 + opp_2;
        return answer;
    }
    else if (calculation_option == V) // bereken het verschil van de twee rechthoeken
    {
        answer = opp_1 - opp_2;
        return answer;
    }

}
    
