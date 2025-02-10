#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
int calc_owed(int coin);


// main script
int main(void)
{
    printf("50 cents owed");
    
    int coin = get_int("Insert coin: ");
    
    calc_owed(coin);
}

// functions 

calc_owed(int coin)
{
    int owed = 50; 
    
    while (remain_owed >= 0)
    { 
        owed = owed - coin;
    }
    if (owed > 0)
        { 
        printf("%i cents owed\n", owed);
        }
    else
    { 
        printf("%i cents change\n", owed);
    } 
        
}

