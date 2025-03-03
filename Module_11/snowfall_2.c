#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

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
    // intitial scene
    init_scene();
    // while(true)
    
        // update scene
        
    // clear scene
    
    // print scene
    
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
    