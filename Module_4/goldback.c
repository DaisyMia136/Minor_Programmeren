#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
bool is_priem(int summer);
void goldbach_checker(int input); 

// main script
int main(void)
{
    goldbach_checker(1000);    
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
    // initial variables
    bool priem_1 = false; 
    bool priem_2 = false;
    int sum = 0;
    
    for(int even_numbers = 2; even_numbers <= input; even_numbers++)
    {   
        //printf("%i\n", even_numbers);
        for(int summer_1 = 1; summer_1 >= even_numbers; summer_1++)
        { 
            //summer_1 = 1;    
            for(int summer_2 = 1; summer_2 >= even_numbers; summer_2++)
            { 
                sum = summer_1 + summer_2;
                if(sum == even_numbers)
                { 
                    //check if summer_1 en summer_2 priem getallen zijn
                    priem_1 = is_priem(summer_1);
                    priem_2 = is_priem(summer_2);
                    
                    if(priem_1 == true || priem_2 == true)
                    { 
                        printf("%i = %i + %i", even_numbers, summer_1,summer_2);
                    }
                }
                        
            }
        }
        
    } 
} 


