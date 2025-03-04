#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// function prototypes



// global variables and structs
#define X_MAX 115
#define Y_MAX 30
static char board[Y_MAX][X_MAX];


// main script
int main(int argc, string argv[])
{
    // initiat board
    
    
    while(true)
    {
        // update board
        
        // clear screen
        
        // print board 
    }
}

// functions
void init_board(void)
{
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            board[y][x] = ' ';
        }
    }
    
    board[14][55] = '#';
    board[15][55] = '#';
    board[16][55] = '#';
    board[15][55] = '#';
}









