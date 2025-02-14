#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes


// main script
int main(void)
{
    
    priem_1 = is_priem(12);
}

// functions 
bool is_priem(int summer)
{
    priem_counter = 0;
    for(deler = 2; deler < summer; deler++)
    {
        rest = summer % deler;
        if(deler != 0)
        { 
            priem_counter++;  
        }
    } 
    if(priem_counter == summer - 2)
    {
        priem = true;
    } 
    return priem;
} 