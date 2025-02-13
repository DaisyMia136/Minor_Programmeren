#include <stdio.h>
#include <cs50.h>
#include <string.h> 
#include <math.h>

// function prototypes
string ask_word();

// main script
int main(void)
{
    
    do 
    { 
        // ask player 1 for input
        string word_1 = ask_word(1);
        
        // last letter word player 1
        char last_letter = word_1[strlen(word_1) - 1];
        printf("%c\n", last_letter);
        
        string word_2 = ask_word(2);
        
    } 
    while (false);
    // while eerste letter input2 == laatste letter input1
        // ask input player 1
        // var =  last letter
        // ask input player 2 
        // var = first letter player 2 
        
        
}

// functions
// ask input
string ask_word(int player)
{ 
    string word = " ";
    if (player == 1)
    {
        word = get_string("Speler 1, geef een woord: ");
    }
    else 
    {
        word = get_string("Speler 2, geef een woord: ");
    }
    return word;
} 