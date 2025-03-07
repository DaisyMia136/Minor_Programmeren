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
#define X_MAX 100
#define Y_MAX 20
#define COLOR "\033[32m"
static char board[Y_MAX][X_MAX];
static char log_1[Y_MAX][X_MAX];


// main script
int main(void)
{
    // initiat board
    init_board();
    
    //print board
    print_board();
    
    
    terra_sleep(1500);
    
    
    while (true)
    {
        //update board
        update_board();
        // clear screen
        clear_screen();
        // print board 
        print_board();
        //sleep 
        terra_sleep(1500);
    }
}

// functions
void init_board(void)
{
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            if ((y == 0 || y == Y_MAX - 1) && (x == 0 || x == X_MAX - 1))
            {
                board[y][x] = '0';
            }
            else
            {
                board[y][x] = ' ';
            }
        }
    }
    
    // initiate figure a cross in the middle
    // board[1][2] = '#';
    // board[2][2] = '#';
    // board[3][2] = '#';
    // board[2][1] = '#';
    // board[2][3] = '#';
    board[14][55] = '#';
    board[15][55] = '#';
    board[16][55] = '#';
    board[15][54] = '#';
    board[15][56] = '#';
}

void print_board(void)
{
    for (int y = 1; y < Y_MAX - 1; y++)
    {
        for (int x = 1; x < X_MAX - 1; x++)
        {
            printf("%c", board[y][x]);
        }
    printf("\n");
    }
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
    // log changes 
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            // define pixels around the current pixel 
            int adjacent_counter = adjacent_pixels(y, x);
            if (board[y][x] == '#')
            {
                //define if current pixel is dead or alive
                if (adjacent_counter == 0 || adjacent_counter == 1 || adjacent_counter >= 4)
                {
                    // log current pixel to die 
                    log_1[y][x] = ' ';
                }
                // or will stay alive
                else if (adjacent_counter == 2 || adjacent_counter == 3) // unnecessary, but easier to read :)
                {
                    // log current pixel to stay alive
                    log_1[y][x] = '#';
                }
            }
            else
            {
                if (adjacent_counter == 3)
                {
                    log_1[y][x] = '#';
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
            board[y][x] = log_1[y][x];
            // clear log
            log_1[y][x] = ' ';
        }
    }


}

int adjacent_pixels(int y, int x)
{
    int adjacent_counter = 0;
// loop through pixels around it
    for (int around_y = y - 1; around_y <= y + 1; around_y++)
    {
        for (int around_x = x - 1; around_x <= x + 1; around_x++)
        {

            if (board[around_y][around_x] == '#' || board[around_y][around_x] == '*')
            {
                adjacent_counter++;
            }
        }

    }
    if (board[y][x] == '#')
    {
        adjacent_counter--;
    }

    //printf("%i\n", adjacent_counter);
    return adjacent_counter;
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

