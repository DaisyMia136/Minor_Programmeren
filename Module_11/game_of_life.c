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
static char log[Y_MAX][X_MAX];


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
    // intial variables
    int adjacent_counter = 0;
    
    // save/log changes 
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            // define pixels around the current pixel 
            // loop through pixels around it
            for (int around_y = y - 1; around_y <= y + 1; y++)
            {
                for (int around_x = x - 1; around_x <= x + 1; x++)
                {
                    if (board[around_y][around_x] == '#')
                    {
                        adjacent_counter++;
                    }
                }
            }
            
            //define if current pixel is dead or alive
            if (board[y][x] == '#')
            {
                // check if it will die
                if (adjacent_counter == 0 || adjacent_counter == 1 || adjacent_counter >= 4)
                {
                    // log current pixel to die 
                    log[y][x] = ' ';
                }
                // or will stay alive
                else if (adjacent_counter == 2 || adjacent_counter == 3) // unnecessary, but easier to read :)
                {
                    // log current pixel to stay alive
                    log[y][x] = '#';
                }
            }
            else
            {
                // check if will aliven 
                if (adjacent_counter == 3)
                {
                    // log current pixel to aliven
                    
                }
            }
        }
    }
    
    // do changes 
}




