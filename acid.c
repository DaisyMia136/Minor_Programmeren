#include <cs50.h>
#include <stdio.h>

// function prototypes
bool is_acidic(float value);

//main script
int main(void)
{
    float input = get_float("Vul het PH level in: ");
    bool acid = is_acidic(input);
    if (input < 0 || input > 14)
    { 
        printf("Please input a number between 0 and 14\n");
    } 
    else 
    {
        if (acid == true)
        { 
            printf("This is an acid\n");
        } 
        else 
        {
            printf("This is a base\n");
        } 
    } 
        // roep functie aan en print boodschap afhankelijk van het resultaat
}

// functions
bool is_acidic(float value)
{
    //set defaults
    bool acid = false;
    
    // decide if inputted value is acidic, basic or neurtral
    if (value < 7.0)
    { 
      acid = true;
    } 
    else 
    { 
        acid = false;
    } 
    return acid;
}
