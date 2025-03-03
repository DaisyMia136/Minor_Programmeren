#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// global variables
    #define X_MAX 80
    #define Y_MAX 40
    #define milliseconds 150
    #define new_snow 10
    #define COLOR "\033[32m"
    int timestep = 0;

// function prototypes
void init_scene(void);
void update_scene(void);
void clear_scene(void)


// structs 
static int scene[X_MAX][Y_MAX];

// main script
int main(void)
{
    // intitial scene
    init_scene();

    // while(true)
    
        // update scene
        update_scene();
        // clear scene
        clear_scene();
        // print scene
        
        // add time point 
        timestep++;
    
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

void update_scene(void) 
{
    // check if the time is right for a new snowflake 
    if(timestep%new_snow == 0)
    {
        // add new snowflake
    }
    
    // loop through all snow flakes
     for (int x = 0; x < X_MAX; x++)
    {
        for (int y = 0; y < Y_MAX; y++)
        {
            if (scene[x][0] == 1 || scene[x][y - 1] == 1)
            {
                scene[x][y] = 1;
            }
            else if (scene[x][y] == 1)
            {
                scene[x][y] = 0;
                scene[x][y - 1] = 1;
            }
        }
    }
}

void clear_scene(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}
    