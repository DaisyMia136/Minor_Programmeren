#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void decryptor(string message);

// main script
int main(void)
{
    // ask input
    string message = get_string("Message: ");
    
    //decrypt
    decryptor(message)
}

//functions
void decryptor(string message)
{
// set initial 
char alfabet_lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
string alfabet_lower = 
char character = ' ';
int index = 0;

// check which letter is most common
    // message length
    int length = strlen(message);
    
    
    
    for(int letter = 0; letter < length; letter++)
    {
        if (isupper(message[letter]))
        {
            character = tolower(message[letter]);
        }
        else
        {
            character = message[letter];
        }
        
        for(int alfa = 0; alfa < 26; alfa++)
        {
            if (character == alfa)
            { 
                index = alfa;
            }
        }
        
    }
    
    // calc difference between most common letter and 'e'
    
    // loop through letters and add the difference 
    
}



