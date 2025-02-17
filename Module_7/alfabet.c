#include <stdio.h>
#include <string.h>
#include <cs50.h>

//function prototypes
void dictionary_check(string woord_1, string woord_2)


// main script
int main(void)
{
    // ask input
    string woord_1 = get_string("Woord 1: "); //Bla
    string woord_2 = get_string("Woord 2: "); //Blue
    
    // dictionary check
    
    
}

// functions
void dictionary_check(string woord_1, string woord_2)
{ 
    int end_counter = 0;
    woord_1 = tolower(woord_1); 
    woord_2 = tolower(woord_2);
    
    int length_1 = strlen(woord_1);
    int length_2 = strlen(woord_2);
    
    if (length_1 > length_2)
    {
        length = length_2;
    } 
    else
    {
        length = length_1;
    }
    
    for (int letter = 0; letter < length || end_counter > 0; letter++)
    {
        if(woord_1[letter] < woord_2(letter))
        {
            printf("%s\n", woord_1);
            end_counter++;
        }
        else if (woord_2[letter] < woord_1[letter])
        {
            printf("%s\n", woord_2);
            end_counter++
        }
        else 
        {
            
        }
    }
    
    
    
    
    
    
}