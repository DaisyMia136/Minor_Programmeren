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
            input[letter] = tolower(input[letter]);
        }
        
        // flip the alfabet :/
        if(input[letter] == 'a' || input[letter] == 'A')
        {
            printf("%c", 'z');
        }
        else if (input[letter] == 'b' || input[letter] == 'A')
        {
            printf("%c", 'y');

        }
        else if (input[letter] == 'c' || input[letter] == 'A')
        {
            printf("%c", 'x');

        }
        else if (input[letter] == 'd' || input[letter] == 'A')
        {
            printf("%c", 'w');

        }
        else if (input[letter] == 'e' || input[letter] == 'A')
        {
            printf("%c", 'v');

        }
        else if (input[letter] == 'f' || input[letter] == 'A')
        {
            printf("%c", 'u');

        }
        else if (input[letter] == 'g' || input[letter] == 'A')
        {
            printf("%c", 't');

        }
        else if (input[letter] == 'h' || input[letter] == 'A')
        {
            printf("%c", 's');

        }
        else if (input[letter] == 'i' || input[letter] == 'A')
        {
            printf("%c", 'r');

        }
        else if (input[letter] == 'j' || input[letter] == 'A')
        {
            printf("%c", 'q');

        }
        else if (input[letter] == 'k' || input[letter] == 'A')
        {
            printf("%c", 'p');

        }
        else if (input[letter] == 'l' || input[letter] == 'A')
        {
            printf("%c", 'o');

        }
        else if (input[letter] == 'm' || input[letter] == 'A')
        {
            printf("%c", 'n');

        }else if (input[letter] == 'n' || input[letter] == 'A')
        {
            printf("%c", 'm');

        }
        else if (input[letter] == 'o' || input[letter] == 'A')
        {
            printf("%c", 'l');

        }
        else if (input[letter] == 'p' || input[letter] == 'A')
        {
            printf("%c", 'k');

        }
        else if (input[letter] == 'q' || input[letter] == 'A')
        {
            printf("%c", 'j');

        }
        else if (input[letter] == 'r' || input[letter] == 'A')
        {
            printf("%c", 'i');

        }
        else if (input[letter] == 's' || input[letter] == 'S')
        {
            printf("%c", 'h');

        }
        else if (input[letter] == 't' || input[letter] == 'T')
        {
            printf("%c", 'g');

        }
        else if (input[letter] == 'u' || input[letter] == 'U')
        {
            printf("%c", 'f');
        }
        else if (input[letter] == 'v' || input[letter] == 'V')
        {
            printf("%c", 'e');

        }
        else if (input[letter] == 'w' || input[letter] == 'W')
        {
            printf("%c", 'd');

        }
        else if (input[letter] == 'x' || input[letter] == 'X')
        {
            printf("%c", 'c');

        }
        else if (input[letter] == 'y' || input[letter] == 'Y')
        {
            printf("%c", 'b');

        }
        else if (input[letter] == 'z' || input[letter] == 'Z')
        {
            printf("%c", 'a');

        }
    }
    
}