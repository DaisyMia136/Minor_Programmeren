#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// function prototypes

// main script
int main(void)
{
    valid = false; 
    
    // ask input 
    do 
    { 
        string pasword = get_string("Wachtwoord? ");
        bool strong = pasword_checker(pasword);
        if (strong)
        { 
                valid = true;
        }
    }
    while(valid = false);
    
    // pasword checker
    
}

// functions

