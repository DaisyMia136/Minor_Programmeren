#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool is_priem(int summer);
void goldbach_checker(int input); 

// main script
int main(void)
{
    
    bool priem_1 = is_priem(input);
    if (priem_1 == true)
    {   
        printf("%i, is a prime number", input);
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
    if(priem_counter == (summer - 2))
    {
        priem = true;
    } 
    return priem;
} 

void goldbach_checker(int input)
{ 
    for(int even_numbers = 2; even_numbers <= input; even_numbers++)
    {   
        for(int summer = 1; summer >= even_numbers; summer++)
        { 
                
        }
        
    } 
} 


