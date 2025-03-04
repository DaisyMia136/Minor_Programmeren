#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// function prototypes
void init_board(void);
void print_board(void);


// global variables and structs
#define X_MAX 115
#define Y_MAX 30
static char board[Y_MAX][X_MAX];


// main script
int main(int argc, string argv[])
{
    // initiat board
    init_board();
    
    // print board
    print_board();
    
    
    while(true)
    {
        // update board
        
        // clear screen
        clear_screen();
        // print board 
        print_board();
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
    
    // initiate figure a cross in the middle
    board[14][55] = '#';
    board[15][55] = '#';
    board[16][55] = '#';
    board[15][54] = '#';
    board[15][56] = '#';
}

void print_board(void)
{
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            printf("%c", board[y][x]);
        }
    }
}

void clear_screen(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

void update_board(void)
{
    // save/log changes 
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            if 
        }
    }
    
    // do changes 
}




