#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
void calc_owed();


// main script
int main(void)
{
    printf("50 cents owed\n");

    calc_owed();
}

// functions 

void calc_owed()
{
    // set defaults
    int owed = 50; 
    
    // ask to input coins while owed is larger than 0
    while (owed > 0)
    { 
        int coin = get_int("Insert coin: "); // ask to input a coin
        
        if(coin == 25 || coin == 10 || coin == 5) // only accept coins with a value of 25, 10 and 5 
        { 
            owed = owed - coin; // calculate how much is owed after the coin
    
            if (owed > 0) // print how much is still owed
                { 
                printf("%i cents owed\n", owed);
                }
            else // print the change
            { 
                printf("%i cents change\n", owed); 
            } 
        }
        else 
        { 
           printf("%i cents owed\n", owed);
        } 
        
    } 
    
}

