#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// function prototypes
void clear_board(void);
void move_snowflake(void);
void terra_sleep(void);
void init_scene(void);

// global variables
    // edges of the board?
    #define X_MAX 80
    #define Y_MAX 40
    #define milliseconds 999
    #define COLOR "\033[32m"

// structs 
static int scene[X_MAX][Y_MAX];

// main script
int main(void)
{
    // initiate scene
    init_scene();
    
    // while (true)
    
        // clear board
        clear_board();
        
        // update scene 
        
            
            move_snowflake();    
            
            // add snowflake to bottom
        
}

// functions 
void init_scene(void)
{
    for (int x = 0; x < X_MAX; x++)
    {
        for (int y = 0; y < Y_MAX; y++)
        {
            scene[x][y] = 0; // 0 indicates no snowflake
        }
    }
}

void clear_board(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}

void move_snowflake(void)
{
    // intitial variables
    
// generate random snowflake location > generate random x coordinate 
    // use the current time to pick a seed for the random number generator
    srandom(time(NULL));
    // generate a random number between 0 and 80
    int x_snowflake = random() / ((double) RAND_MAX + 1) * X_MAX; 
    //printf("%i", x_snowflake);
            
// print snowflake * 
    for (int y_snowflake = Y_MAX; y_snowflake > 0; y_snowflake--)
    {
        printf("\033[%d;%dH*", y_snowflake, x_snowflake);
        terra_sleep();
        printf("\033[%d;%dH ", y_snowflake, x_snowflake);
    }
            // move snowflake down    
}


void terra_sleep(void)
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