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
bool pasword_checker(pasword)
{
    // check if pasword is 8 characters long 
    length = strlen(pasword);
    if (length < 8)
    
    
    // check if no two characters are subsequently the same
    
    
}
