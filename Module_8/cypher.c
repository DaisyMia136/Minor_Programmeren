#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void message_encrypter(string input);

// main script
int main(void)
{
    // ask input
    string input = get_string("plaintext: ");
    
    //encrypt message 
    message_encrypter(input);
    
    return 0;
}

//functions
void message_encrypter(string input)
{
    // initial variables ++ DECLARATE THE VARIABLES :)
    int counter = 
    
    // calc input length
    int length = strlen(input);
    
    // loop through letters and encrypt 
    for (int letter = 0; letter < length; letter++)
    {
        if (islower(input[letter]))
        {
            input[letter] = toupper(input[letter]);
        }
        else 
        {
            input[letter] = tolower(input[letter])
        }
        
        
        input[letter] = input[letter] + 
        
        
        
        if(input[letter] == 'a')
        {
            printf("%c", 'z');
        }
        else if (input[letter] == 'b')
        {
            printf("%c", 'y');

        }
    }
    
}