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
    
    // setup array with the alphabet
    char alfabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 26; i >=0; i--)
    {
        alfabet[26 + i] = toupper(alfabet[i]);
        printf("%c", alfabet[26 + i]);
    }
    
    for (int letter = 0; letter < length; letter++)
    {
        strchr(alfabet, input[letter])
    }
    
    
