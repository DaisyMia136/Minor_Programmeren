#include <stdio.h>
#include <cs50.h>
#include <string.h> 
#include <math.h>

// function prototypes
string ask_word();

// main script
int main(void)
{
    // initialise variables
    char last_letter = ' ';
    char first_letter = ' ';
    
     
    do 
    { 
        if (last_letter == first_letter)
        {
            // ask player 1 for input
            word_1 = ask_word(1);
        
            // last letter word player 1
            last_letter = word_1[strlen(word_1) - 1];
            printf("%c\n", last_letter);
        } 
        else 
        { 
            printf("Player 2 wint! \n");
        } 
        
        if (last_letter == first_letter)
        {
            // ask player 2 for input
            word_2 = ask_word(2);
            
            // first letter word player 2
            first_letter = word_2[0];
            printf("%c\n", first_letter);
        } 
        else
        { 
            printf("Player 1 wint! \n");

        } 
            
    } 

    
    // print winning message
    
        
        
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