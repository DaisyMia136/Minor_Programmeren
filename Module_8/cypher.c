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
        if(input[letter] == 'a')
        {
            printf("%c", 'z');
        }
        else if (input[letter] == 'A')
        {
            printf("%c", 'Z');

        }
        else if (input[letter] == 'b')
        {
            printf("%c", 'y');

        }
        else if (input[letter] == 'B')
        {
            printf("%c", 'Y');

        }
        else if (input[letter] == 'c')
        {
            printf("%c", 'x');

        }
        else if (input[letter] == 'C')
        {
            printf("%c", 'X');

        }
        else if (input[letter] == 'd')
        {
            printf("%c", 'w');

        }
        else if (input[letter] == 'D')
        {
            printf("%c", 'W');

        }
        else if (input[letter] == 'e')
        {
            printf("%c", 'v');

        }
        else if (input[letter] == 'E')
        {
            printf("%c", 'V');

        }
        else if (input[letter] == 'f')
        {
            printf("%c", 'u');

        }
        else if (input[letter] == 'F')
        {
            printf("%c", 'U');

        }
        
        else if (input[letter] == 'g')
        {
            printf("%c", 't');

        }
        else if (input[letter] == 'G')
        {
            printf("%c", 'T');

        }
        else if (input[letter] == 'h')
        {
            printf("%c", 's');

        }
        else if (input[letter] == 'H')
        {
            printf("%c", 'S');

        }
        else if (input[letter] == 'i')
        {
            printf("%c", 'r');

        }
        else if (input[letter] == 'I')
        {
            printf("%c", 'R');

        }
        else if (input[letter] == 'j')
        {
            printf("%c", 'q');

        }
        else if (input[letter] == 'J')
        {
            printf("%c", 'Q');

        }
        else if (input[letter] == 'k')
        {
            printf("%c", 'p');

        }
        else if (input[letter] == 'K')
        {
            printf("%c", 'P');

        }
        else if (input[letter] == 'l')
        {
            printf("%c", 'o');

        }
        else if (input[letter] == 'L')
        {
            printf("%c", 'O');

        }
        else if (input[letter] == 'm')
        {
            printf("%c", 'n');

        }
        else if (input[letter] == 'M')
        {
            printf("%c", 'N');

        }
        else if (input[letter] == 'n')
        {
            printf("%c", 'm');

        }
        else if (input[letter] == 'N')
        {
            printf("%c", 'M');

        }
        else if (input[letter] == 'o')
        {
            printf("%c", 'l');

        }
        else if (input[letter] == 'O')
        {
            printf("%c", 'L');

        }
        else if (input[letter] == 'p')
        {
            printf("%c", 'k');

        }
        else if (input[letter] == 'P')
        {
            printf("%c", 'K');

        }
        else if (input[letter] == 'q' || input[letter] == 'Q')
        {
            printf("%c", 'j');

        }
        else if (input[letter] == 'Q')
        {
            printf("%c", 'J');

        }
        else if (input[letter] == 'r' || input[letter] == 'R')
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
        else 
        {
            printf("%c", input[letter]);
        }
    
    } 
}