#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// function prototypes
int vowel_counter(string);

// main script 
int main(void)
{
    // ask input
    string woord_1 = get_string("Woord 1: ");
    string woord_2 = get_string("Woord 2: ");
    
    // vowel count
    int vowel_1 = vowel_counter(woord_1);
    int vowel_2 = vowel_counter(woord_2);
    
    // print result
    if(vowel_1 < vowel_2)
    { 
        printf("%s", vowel_2);
    } 
    else if (vowel_2 < vowel_1)
    { 
        printf(vowel_1)
    } 
}

//functions
int vowel_counter(string woord)
{
    int vowel_counter = 0;
    int word_length = strlen(woord);
    
    for(letter=0; letter <= word_length; letter++)
    {
        if(woord[letter] == 'a' || woord[letter] == 'e' || woord[letter] == 'u' || woord[letter] == 'i' || woord[letter] == 'o')
        {
            vowel_counter++;
        }
        
    }
    return vowel_counter;
    
}
