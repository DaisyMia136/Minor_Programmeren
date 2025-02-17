\#include <stdio.h>
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
    
}

//functions
void message_encrypter(string input)
{
    // initial variables ++ DECLARATE THE VARIABLES :)
    int index = 0;
    int counter = 2;
    // calc input length
    int length = strlen(input);
    
    // setup array with the alphabet
    char alfabet[52] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'Z', 'Y', 'X', 'W', 'V', 'U', 'T', 'S', 'R', 'Q', 'P', 'O', 'N', 'M', 'L', 'K', 'J', 'I', 'H', 'G', 'F', 'E', 'D', 'C', 'B', 'A'};

    printf("cyphertext: ");
    
    for (int letter = 0; letter < length; letter++)
    {
        for (int i = 0; i <= 52; i++)
        { 
            if(input[letter] == alfabet[i])
            {
                index = i;
        
                if (isupper(input[letter]))
                { 
                    printf("%c", alfabet[index - 26]);
                }
                else
                {
                    printf("%c", alfabet[index + 26]);
                }
            } 
            
        }
        if (isblank(input[letter]))
            {
                printf(" ");
            }
    }
    printf("\n");
}
