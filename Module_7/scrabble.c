#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
int calc_scrabble_points(string word);



// main script
int main(void)
{
    // ask input
    string word_1 = get_string("Player 1: ");
    string word_2 = get_string("Player 2: ");
    
    // calculate points 
    points_1 = calc_scrabble_points(word_1);
    points_2 = calc_scrabble_points(word_2);
    
    // decide the winner
    if (points_1 < points_2)
    {
        printf("Player 1 wins!\n");
    }
    else if (points_2 < points_1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }


}

//functions

// calculate points 
int calc_scrabble_points(string word)
{
    //initial counters
    int points = 0;
    
    // calc length of word
    int length = strlen(word);
    
    
    //loop through all letters
    for(int letter = 0; letter < length; letter++)
    { 
        // convert all uppercase letters to lower case
        if (isupper(word[letter]))
        {
            word[letter] = word[letter] + 32;
        }
        
        // calculate points
        if(word[letter] == 'a' || word[letter] == 'e' || word[letter] == 'i' || word[letter] == 'l' || word[letter] == 'n' || word[letter] == 'o' || word[letter] == 'r' || word[letter] == 's' || word[letter] == 't' || word[letter] == 'u')
        {
            points++;
        }
        else if (word[letter] == 'd' || word[letter] == 'g')
        {
            points =+ 2;
        }
        else if (word[letter] == 'b' || word[letter] == 'c' || word[letter] == 'm' || word[letter] == 'p')
        { 
            points =+ 3;
        }
        else if (word[letter] == 'f' || word[letter] == 'h' || word[letter] == 'v' || word[letter] == 'w')
        {
            points =+ 4;
        }
        else if (word[letter] == 'k')
        {
            points =+ 5;
        }
        else if (word[letter] == 'j' || word[letter] == 'x')
        { 
            points =+ 8;
        }
        else if (word[letter] == 'q' || word[letter] == 'z')
        {
            points =+ 10;
        }
    }
    return points;
}

