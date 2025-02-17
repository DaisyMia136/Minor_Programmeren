#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes



// main script
int main(void)
{
    // ask input
    string word_1 = get_string("Player 1: ");
    string word_2 = get_string("Player 2: ");
    
    // calculate points 
    
}

//functions

// calculate points 
calc_scrabble_points(string word)
{
    // calc length of word
    int length = strlen(word);
    int points = 0;
    
    //loop through all letters
    for(int letter = 0; letter < length; letter++)
    { 
        // convert all uppercase letters to lower case
        if (isupper(word[letter]))
        {
            word[letter] = word[letter + 32];
        }
        
        // calculate points
    }
}

