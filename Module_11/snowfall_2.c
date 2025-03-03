#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// global variables
    #define X_MAX 40
    #define Y_MAX 80
    #define new_snow 5
    #define COLOR "\033[32m"
    int timestep = 0;

// function prototypes
void init_scene(void);
void update_scene(void);
void add_snowflake(void);
void clear_scene(void);
void print_scene(void);
void print_snowflake(int flake);
void terra_sleep(int milliseconds);

// structs 
static int scene[X_MAX][Y_MAX];

// main script
int main(void)
{
    // intitial scene
    init_scene();
    add_snowflake();

    while(true)
    {
        // update scene
        update_scene();
        void terra_sleep(int milliseconds)
        // clear scene
        clear_scene();
        // print scene
        print_scene();
        // add time point 
        timestep++;
    }
    
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
        add_snowflake();
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
            
            if (scene[x][y] == 1)
            {
                scene[x][y] = 0;
                scene[x][y - 1] = 1;
            }
            else
            {
                scene[x][y] = 0;
            }
        }
    }
}

void clear_scene(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
}
    
void print_scene(void)
{
    for (int x = 0; x < X_MAX; x++)
    {
        for (int y = 0; y < Y_MAX; y++)
        {
            print_snowflake(scene[x][y]);
        }
        printf("\n");
    }
}

void print_snowflake(int flake)
{
    if (flake == 1)
    {
        printf("*");
    }
    else if (flake == 0)
    {
        printf(" ");
    }
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

void add_snowflake(void)
{
    // intitial variables
    
    // generate random snowflake location > generate random x coordinate 
    srandom(time(NULL)); // use the current time to pick a seed for the random number generator
    int x = random() / ((double) RAND_MAX + 1) * X_MAX; // generate a random number between 0 and 80
    
    // add x_snowflake to the scene
    scene[x][Y_MAX - 1] = 1;
    printf("new snowflake added");
}
