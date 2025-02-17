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

    for (int i = 0; i <=26; i++)
    {
        alfabet[26 + i] = toupper(alfabet[i]);
        printf("%c\n", alfabet[26 + i]);
    }
    
    for (int letter = 0; letter < length; letter++)
    {
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    // printf("cyphertext: ");
    // // loop through letters and encrypt 
    // for (int letter = 0; letter < length; letter++)
    // {
    //     if (islower(input[letter]))
    //     {
    //         input[letter] = toupper(input[letter]);
    //     }
    //     else 
    //     {
    //         input[letter] = tolower(input[letter]);
    //     }
        
    //     // flip the alfabet :/
    //     if(input[letter] == 'a')
    //     {
    //         printf("%c", 'z');
    //     }
    //     else if (input[letter] == 'A')
    //     {
    //         printf("%c", 'Z');

    //     }
    //     else if (input[letter] == 'b')
    //     {
    //         printf("%c", 'y');

    //     }
    //     else if (input[letter] == 'B')
    //     {
    //         printf("%c", 'Y');

    //     }
    //     else if (input[letter] == 'c')
    //     {
    //         printf("%c", 'x');

    //     }
    //     else if (input[letter] == 'C')
    //     {
    //         printf("%c", 'X');

    //     }
    //     else if (input[letter] == 'd')
    //     {
    //         printf("%c", 'w');

    //     }
    //     else if (input[letter] == 'D')
    //     {
    //         printf("%c", 'W');

    //     }
    //     else if (input[letter] == 'e')
    //     {
    //         printf("%c", 'v');

    //     }
    //     else if (input[letter] == 'E')
    //     {
    //         printf("%c", 'V');

    //     }
    //     else if (input[letter] == 'f')
    //     {
    //         printf("%c", 'u');

    //     }
    //     else if (input[letter] == 'F')
    //     {
    //         printf("%c", 'U');

    //     }
        
    //     else if (input[letter] == 'g')
    //     {
    //         printf("%c", 't');

    //     }
    //     else if (input[letter] == 'G')
    //     {
    //         printf("%c", 'T');

    //     }
    //     else if (input[letter] == 'h')
    //     {
    //         printf("%c", 's');

    //     }
    //     else if (input[letter] == 'H')
    //     {
    //         printf("%c", 'S');

    //     }
    //     else if (input[letter] == 'i')
    //     {
    //         printf("%c", 'r');

    //     }
    //     else if (input[letter] == 'I')
    //     {
    //         printf("%c", 'R');

    //     }
    //     else if (input[letter] == 'j')
    //     {
    //         printf("%c", 'q');

    //     }
    //     else if (input[letter] == 'J')
    //     {
    //         printf("%c", 'Q');

    //     }
    //     else if (input[letter] == 'k')
    //     {
    //         printf("%c", 'p');

    //     }
    //     else if (input[letter] == 'K')
    //     {
    //         printf("%c", 'P');

    //     }
    //     else if (input[letter] == 'l')
    //     {
    //         printf("%c", 'o');

    //     }
    //     else if (input[letter] == 'L')
    //     {
    //         printf("%c", 'O');

    //     }
    //     else if (input[letter] == 'm')
    //     {
    //         printf("%c", 'n');

    //     }
    //     else if (input[letter] == 'M')
    //     {
    //         printf("%c", 'N');

    //     }
    //     else if (input[letter] == 'n')
    //     {
    //         printf("%c", 'm');

    //     }
    //     else if (input[letter] == 'N')
    //     {
    //         printf("%c", 'M');

    //     }
    //     else if (input[letter] == 'o')
    //     {
    //         printf("%c", 'l');

    //     }
    //     else if (input[letter] == 'O')
    //     {
    //         printf("%c", 'L');

    //     }
    //     else if (input[letter] == 'p')
    //     {
    //         printf("%c", 'k');

    //     }
    //     else if (input[letter] == 'P')
    //     {
    //         printf("%c", 'K');

    //     }
    //     else if (input[letter] == 'q')
    //     {
    //         printf("%c", 'j');

    //     }
    //     else if (input[letter] == 'Q')
    //     {
    //         printf("%c", 'J');

    //     }
    //     else if (input[letter] == 'r')
    //     {
    //         printf("%c", 'i');

    //     }
    //     else if (input[letter] == 'R')
    //     {
    //         printf("%c", 'I');

    //     }
    //     else if (input[letter] == 's')
    //     {
    //         printf("%c", 'h');

    //     }
    //     else if (input[letter] == 'S')
    //     {
    //         printf("%c", 'H');

    //     }
    //     else if (input[letter] == 't')
    //     {
    //         printf("%c", 'g');

    //     }
    //     else if (input[letter] == 'T')
    //     {
    //         printf("%c", 'G');

    //     }
        
    //     else if (input[letter] == 'u')
    //     {
    //         printf("%c", 'f');
    //     }
    //     else if (input[letter] == 'U')
    //     {
    //         printf("%c", 'F');

    //     }
    //     else if (input[letter] == 'v')
    //     {
    //         printf("%c", 'e');

    //     }
    //     else if (input[letter] == 'V')
    //     {
    //         printf("%c", 'E');

    //     }
    //     else if (input[letter] == 'w')
    //     {
    //         printf("%c", 'd');

    //     }
    //     else if (input[letter] == 'W')
    //     {
    //         printf("%c", 'D');

    //     }
    //     else if (input[letter] == 'x')
    //     {
    //         printf("%c", 'c');

    //     }
    //     else if (input[letter] == 'X')
    //     {
    //         printf("%c", 'C');

    //     }
    //     else if (input[letter] == 'y')
    //     {
    //         printf("%c", 'b');

    //     }
    //     else if (input[letter] == 'Y')
    //     {
    //         printf("%c", 'B');

    //     }
    //     else if (input[letter] == 'z')
    //     {
    //         printf("%c", 'a');

    //     }
    //     else if (input[letter] == 'Z')
    //     {
    //         printf("%c", 'A');

    //     }
    //     else 
    //     {
    //         printf("%c", input[letter]);
    //     }
    
    // } 
    printf("\n");
}