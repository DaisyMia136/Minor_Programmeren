#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes
void morse(string input); 

// main script
int main(void)
{
    // ask for input
    string input = get_string("Geef een morse code: ");
    
    // convert to letters
    morse(input);
}

// functions 
// convert input to text 
void morse(string input)
{
    // calculate how many letters are in the morse code
    int input_length = strlen(input)/3;
    //printf("%i\n", input_length);
    
    // make an empty string with the number letters
    //string morse[input_length];

    // inititalise counters 
    int input_counter = 0;
    
    // loop through all sets of three signals (making up one letter)
    for(int letters = 0; letters < input_length; letters++)
    { 
        // initialise variables
        char character[3];
        
        // for every three signals make a variable character containing the three signals as one string
        for (int signal = 0; signal < 3; signal++)
        { 
            character[signal] = input[input_counter];
            input_counter++;
        } 
        
        printf("%c%c%c\n", character[0], character[1], character[2]);
        
        
        // check which character is which letter and print the corresponding letter
        if(strcmp(character, "...") ==0)
        { 
            printf("S");
        }
        else if (strcmp(character, "---") ==0)
        { 
            printf("O");
        } 
        else if (strcmp(character, "-..") ==0)
        { 
            printf("D");
        }
        else if (strcmp(character, ".-.") ==0)
        { 
            printf("R");
        } 

    }
}