#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool is_priem(int summer);

// main script
int main(void)
{
    
    bool priem_1 = is_priem(12);
    if (priem_1 == true)
    {   
        printf("12, is a prime number");
    } 
}

// functions 
bool is_priem(int summer)
{
    bool priem = false;
    int priem_counter = 0;
    for(int deler = 2; deler < summer; deler++)
    {
        int rest = summer % deler;
        if(rest != 0)
        { 
            priem_counter++;  
        }
    } 
    printf("%i", priem_counter);
    if(priem_counter == (summer - 2))
    {
        priem = true;
    } 
    return priem;
} 