#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototypes
void clear_board(void);
void move_snowflack(void);

// global variables
    // edges of the board?
    #define EDGE_MAX 80

// structs 

// main script
int main(void)
{
    // initiate board
    
    // while (true)
    
        // clear board
        clear_board();
        
        // print bottom snowflacks 
        
        // move snowflack down 
        move_snowflack();    
            
        
        // add snowflack to bottom
        
}

// functions 
void clear_board(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

void move_snowflack(void)
{
    // intitial variables
    
// generate random snowflack location > generate random x coordinate 
    // use the current time to pick a seed for the random number generator
    srandom(time(NULL));
    // generate a random number between 0 and 80
    int x_snowflack = random() / ((double) RAND_MAX + 1) * EDGE_MAX; 
    //printf("%i", x_snowflack);
            
// print snowflack * 
            
            // move snowflack down    
}