#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// function prototypes
bool pasword_checker(string pasword);
bool two_char_in_row(string pasword, int length);


// main script
int main(void)
{
    bool valid = false; 
    
    // ask input 
    int counter = 0;
    do 
    { 
        string pasword = get_string("Wachtwoord? ");
        bool strong = pasword_checker(pasword);
        if (strong)
        { 
                valid = true;
                printf("Sterk genoeg!\n");
        }
        else
        {
            printf("Niet sterk genoeg!\n");
            counter++;
        }
        printf("%i", counter);
    }
    while(valid == false);
    
    
    
    // pasword checker
    
}

// functions
bool pasword_checker(string pasword)
{
    // check if pasword is 8 characters long 
    int length = strlen(pasword);
    
    if (length < 8)
    {
        return false; 
    }
    
    // check if no two characters are subsequently the same
    else if(two_char_in_row(pasword, length))
    {
        return false;
    }
    
    // if non of the criteria are hit, return true
    else
    { 
        return true;
    }
}


bool two_char_in_row(string pasword, int length)
{
    // initialise variables
    int end_counter = 0;
    char letter_1 = ' ';
    char letter_2 = ' ';
    
    // loop through letters and check if current letter is the same as the next letter
    for (int letter = 0; letter < length && end_counter == 0; letter++)
    { 
        letter_1 = pasword[letter];
        letter_2 = pasword[letter + 1];
        
        if (letter_1 == letter_2)
        {
            end_counter++;
        }
        
    }
    
    if (end_counter == 0)
    {
        return false; // false because no two the same characters in a row were found
    }
    else
    {
        return true; // true  because two the same characters in a row were found
    }
}
