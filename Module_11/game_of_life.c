#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

// function prototypes
void init_board(void);
void print_board(void);
void clear_screen(void);
void update_board(void);
int adjacent_pixels(int y, int x);
void terra_sleep(int milliseconds);



// global variables and structs
#define X_MAX 115
#define Y_MAX 20
#define COLOR "\033[32m"
static char board[Y_MAX][X_MAX];
static char log[Y_MAX][X_MAX];


// main script
int main(void)
{
    // initiat board
    init_board();
    
    // print board
    print_board();
    
    //terra_sleep(50);
    
    
    while (true)
    {
        printf("\n\n ik ben hier :)");
        terra_sleep(5000);

        // update board
        update_board();
        // clear screen
        clear_screen();
        // print board 
        print_board();
        //sleep 
        terra_sleep(50);
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
    printf("\n");
    fflush(stdout);
}

void clear_screen(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
    //fflush(stdout);
}

void update_board(void)
{
    printf("\n\n ik ben hier :)");
    // log changes 
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            // define pixels around the current pixel 
            int adjacent_counter = adjacent_pixels(y, x);
            
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
                    log[y][x] = '#';
                }
            }
        }
    }
    
    // do changes & clear log
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            // do changes
            board[y][x] = log[y][x];
            // clear log
            log[y][x] = ' ';
        }
    }
}

int adjacent_pixels(int y, int x)
{
    int adjacent_counter = 0;
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
    return adjacent_counter - 1;
}


void terra_sleep(int milliseconds)
{
    struct timeval start, end, time_difference;
    
    // Start measuring time
    gettimeofday(&start, NULL);
    gettimeofday(&end, NULL);
    
    // Compute difference between now and then
    time_difference.tv_sec = end.tv_sec - start.tv_sec;
    time_difference.tv_usec = end.tv_usec - start.tv_usec;
    
    // While not enough time wasted
    while (time_difference.tv_usec / 1000 + time_difference.tv_sec * 1000 < milliseconds)
    {
        // Measure time again
        gettimeofday(&end, NULL);

        // Compute difference again
        time_difference.tv_sec = end.tv_sec - start.tv_sec;
        time_difference.tv_usec = end.tv_usec - start.tv_usec;
    }
    return;
}

