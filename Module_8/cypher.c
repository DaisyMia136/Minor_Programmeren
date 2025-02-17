#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes

// main script
int main(void)
{
    // ask input
    string input = get_string("plaintext: ");
    
    //encrypt message 
    message_encrypter(input)
    
    return 0;
}

//functions
