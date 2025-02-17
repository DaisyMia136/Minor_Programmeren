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
        
        // flip the alfabet :/
        if(input[letter] == 'a')
        {
            printf("%c", 'z');
        }
        else if (input[letter] == 'b')
        {
            printf("%c", 'y');

        }
        else if (input[letter] == 'c')
        {
            printf("%c", 'x');

        }
        else if (input[letter] == 'd')
        {
            printf("%c", 'w');

        }
        else if (input[letter] == 'e')
        {
            printf("%c", 'v');

        }
        else if (input[letter] == 'f')
        {
            printf("%c", 'u');

        }
        else if (input[letter] == 'b')
        {
            printf("%c", 'y');

        }
    }
    
}