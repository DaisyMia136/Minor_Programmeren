#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
int do_calc(int recht1_lengte, int recht1_breedte, int recht2_lengte, int recht2_breedte, char * calculation_option);



// main script
int main(void)
{
    // Vraag lengte en breedte rechthoek 1 en 2 
    int recht1_lengte = get_int("Lengte 1: ");
    int recht1_breedte = get_int("Breedte 1: " );
    int recht2_lengte = get_int("Lengte 2: ");
    int recht2_breedte = get_int("Breedte 2: ");
    
    // vraag welke optie er uitgevoerd moet worden
    char * calculation_option = get_string("Wil je de oppervlakte van rechthoek (1) of (2), of de (S)om of het (V)erschil weten? ");
    
    if (strcmp(calculation_option, "1") != 0 && strcmp(calculation_option, "2") != 0 && strcmp(calculation_option, "S") != 0 && strcmp(calculation_option, "V")!= 0)
    { 
        printf("Please enter one of the valid options: 1, 2 , S or V. Please note that the input is capital sensitive.")
    // Doe de berekening met de ingevoerde opties en gegevens
    int answer = do_calc(recht1_lengte, recht1_breedte, recht2_lengte, recht2_breedte, calculation_option);
    printf("%i\n", answer);
    
}

// functions 
int do_calc(int recht1_lengte, int recht1_breedte, int recht2_lengte, int recht2_breedte, char * calculation_option)
{
    // set defaults
    int answer = 0;
    
    int opp_1 = recht1_lengte * recht1_breedte; // bereken oppervlakte van t eerste rechthoek
    int opp_2 = recht2_lengte * recht2_breedte; // bereken oppervlakte van t tweede rechthoek
    
    if (strcmp(calculation_option, "1") == 0) 
    {
        answer = opp_1;
    } 
    else if (strcmp(calculation_option, "2") == 0) 
    {
        answer = opp_2;
    }
    else if (strcmp(calculation_option, "S") == 0) // bereken de som van de twee rechthoeken
    {
        answer = opp_1 + opp_2;
    }
    else if (strcmp(calculation_option, "V") == 0) // bereken het verschil van de twee rechthoeken
    {
        answer = opp_1 - opp_2;
    }
    return answer;
}
    
