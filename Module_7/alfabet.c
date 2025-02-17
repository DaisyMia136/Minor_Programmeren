#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void dictionary_check(string woord_1, string woord_2);


// main script
int main(void)
{
    // ask input
    string woord_1 = get_string("Woord 1: "); //Bla
    string woord_2 = get_string("Woord 2: "); //Blue
    
    // dictionary check
    dictionary_check(woord_1, woord_2);
    
}

// functions
void dictionary_check(string woord_1, string woord_2)
{ 
    // set end_counter and length
    int end_counter = 0;
    int length = 0;
    
    // get length of both strings
    int length_1 = strlen(woord_1);
    int length_2 = strlen(woord_2);
    // initiate lower case word 1 and 2 variables
    char woord_lower_1[length_1];
    char woord_lower_2[length_2];

    // find the shortest word length
    if (length_1 > length_2)
    {
        length = length_2;
    } 
    else
    {
        length = length_1;
    }
    
    // loop through the shortest word
    for (int letter = 0; letter <= length && end_counter == 0; letter++)
    {
        // convert all characters to lowercase
        woord_lower_1[letter] = tolower(woord_1[letter]); 
        woord_lower_2[letter] = tolower(woord_2[letter]);
        
        if(woord_lower_1[letter] < woord_lower_2[letter])
        {
            printf("%s\n first", woord_1);
            end_counter++;
        }
        else if (woord_lower_2[letter] < woord_lower_1[letter])
        {
            printf("%s\n first", woord_2);
            end_counter++;
        }
    }
    
    if (end_counter == 0)
    { 
        printf("No need to decide!");
    } 
}