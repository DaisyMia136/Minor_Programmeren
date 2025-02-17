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
    //initial counter
    int points = 0;
    
    // calc length of word
    int length = strlen(word);
    
    
    //loop through all letters
    for(int letter = 0; letter < length; letter++)
    { 
        // convert all uppercase letters to lower case
        if (isupper(word[letter]))
        {
            word[letter] = word[letter + 32];
        }
        
        // calculate points
        if(word[letter] == 'a' || word[letter] == 'e' || word[letter] == 'i' || word[letter] == 'l' || word[letter] == 'n' || word[letter] == 'n' || word[letter] == 'o' || word[letter] == 'r' || word[letter] == 's' || word[letter] == '' || )
    }
}

