#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void display_calendar(int year, int month);
void display_header(int year, int month);
void display_grid(int year, int month, int duration);

// constants
const start = 3 // the first day of january in 1800 was on a wednesday (3rd day)

// main script
int main(void) //int argc, char *argv[])
{
    // ask input
    //int year = argv[1];
    //int month = argv [2];
    
    int year = get_int("Year: ");
    int month = get_int("Month: ");
    
    // display calendar
    display_calendar(year, month);
    
}

//functions

// ask input
// void input_calendar();
// {
    
// }

// print calendar
void display_calendar(int year, int month)
{
    
    display_header(year, month);
    
    display_grid();
}
// print header
void display_header(int year, int month)
{
    // array months
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
    int duration[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    
    printf("          %s %i\n ---------------------------\n", months[month-1], year);
}

//print grit
void display_grid(int year, int month, int duration)
{
    // first day of the month
    
    // number of days within month
    
    // print spaces
    
    // print grid
}

int first_day()
{
    
}

