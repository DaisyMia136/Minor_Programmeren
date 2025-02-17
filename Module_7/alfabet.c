#include <stdio.h>
#include <string.h>
#include <cs50.h>

//function prototypes
void dictionary_check(string woord_1, string woord_2)


// main script
int main(void)
{
    // ask input
    string woord_1 = get_string("Woord 1: ");
    string woord_2 = get_string("Woord 2: ");
    
    // dictionary check
    
    
}

// functions
void dictionary_check(string woord_1, string woord_2)
{ 
    woord_1 = tolower(woord_1);
    woord_2 = tolower(woord_2);
    
    int length_1 = strlen(woord_1);
    int length_2 = strlen(woord_2);
    
    if (length_1 > length_2)
    {
        length = length_1;
    } 
    else
    {
        length = length_2;
    }
    
    
    
    
    
    
}