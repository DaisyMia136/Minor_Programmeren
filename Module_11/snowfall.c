#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>

// global variables
    #define X_MAX 220
    #define Y_MAX 60
    #define new_snow 2
    #define COLOR "\033[32m"
    int timestep = 0;

// function prototxpes
void init_scene(void);
void update_scene(void);
void add_snowflake(void);
void clear_scene(void);
void print_scene(void);
void print_snowflake(int flake);
void terra_sleep(int milliseconds);

// structs 
static int scene[Y_MAX][X_MAX];

// main script
int main(void)
{
    srandom(time(NULL)); // use the current time to pick a seed for the random number generator
    // intitial scene
    init_scene();
    add_snowflake();

    while(true)
    {
        // update scene
        update_scene();
    
        // clear scene
        clear_scene();
        
        // print scene
        print_scene();

        terra_sleep(50);
        // add time point 
        timestep++;
        
        // if (timestep%150 == 0)
        // {
        //     init_scene();
        // }
    }
    
}

// functions 
void init_scene(void)
{
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {
            scene[y][x] = 0; // 0 indicates no snowflake
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
    
    // loop through scene 
    for (int y = Y_MAX - 1; y >= 0; y--)
    {
        for (int x = X_MAX - 1; x >= 0; x--)
        {
            
            if(scene[y][x] == 1)//&& y != Y_MAX -1 && scene[y + 1][x] != 1)
            {
                scene[y][x] = 0;
                scene[y+ 1][x + 3] = 1;
            }
        }
    }
    return;
}

void clear_scene(void)
{
    printf("\033[2J");
    printf("\033[%d;%dH", 0, 0);
    
}
    
void print_scene(void)
{
    for (int y = 0; y < Y_MAX; y++)
    {
        for (int x = 0; x < X_MAX; x++)
        {

            print_snowflake(scene[y][x]);
        }
        printf("\n");
    }
    fflush(stdout);
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
    
    // generate random snowflake location > generate random y coordinate 
    
    int x = random() / ((double) RAND_MAX + 1) * X_MAX; // generate a random number between 0 and MAX
    
    // add y_snowflake to the scene
    scene[0][x] = 1;
    
    int x_1 = random() / ((double) RAND_MAX + 1) * X_MAX; // generate a random number between 0 and MAX
    
    // add y_snowflake to the scene
    scene[0][x_1] = 1;
    
    int x_2 = random() / ((double) RAND_MAX + 1) * X_MAX; // generate a random number between 0 and MAX
    
    // add y_snowflake to the scene
    scene[0][x_2] = 1;
    //printf("new snowflake added");
}
