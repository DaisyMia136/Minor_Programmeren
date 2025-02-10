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
    int owed = 50; 
    int coin = get_int("Insert coin: ");
    
    
    while (owed >= 0)
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
    coin = get_int("Insert coin: ");
    }
        
}

