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
        int coin = get_int("Insert coin: ");
        if(coin == 25 || coin == 10 || coin == 5)
        { 
            owed = owed - coin;
    
            if (owed > 0)
                { 
                printf("%i cents owed\n", owed);
                }
            else
            { 
                printf("%i cents change\n", owed);
            } 
        }
        
    } 
    
}

