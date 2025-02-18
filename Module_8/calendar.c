#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void display_calendar(int year, int month);
void display_header(int year, int month);
void display_grid(int year, int month, int duration);
int first_day(int year, int month, int duration);
int number_of_days_from_1800(int year, int month)
int days_till_year(int year, int month)
void days_till_month(int year int month, int duration)
bool check_leapyears(int years)
void space_printer(int first_day)
void grid_printer(int month, int duration, int first_day)



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
    
    display_grid(year, month, duration);
}
// print header
void display_header(int year, int month)
{
    // array months
    string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
    int duration[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    
    printf("          %s %i\n ---------------------------\n Sun Mon Tue Wed Thu Fri Sat Sun\n", months[month-1], year);
}

//print grit
void display_grid(int year, int month, int duration)
{
    // first day of the month
    int first_day = first_day(year, month, duration);
    
    // number of days within month
    int month_days = duration[month - 1];
    
    // print spaces
    space_printer(first_day);
    // print grid
    grid_printer(month, duration, first_day);
}

int first_day(int year, int month, int duration)
{
    // count number of days between current month and jan 1st number_of_days_from_1800
    int days_between = number_of_days_from_1800();
    
    int firstday = (number_of_days_from_1800 + start) % 7;
}

int number_of_days_from_1800(int year, int month)
{
    // calc years between 1800 and input years 
    int day_year = days_till_year(year, month);
    
    // calc days between 1st jan and 1st of inputted month
    void days_till_month(year, month, duration);
}

int days_till_year(int year, int month)
{
    // initial variables
    bool leap = false;
    days = 0;
    
    for(int years = 1800; years < year; years++)
    {
        // check if leap_year
        leap = check_leapyears(years);
        if (leap)
        {
            days += 366;
        }
        else 
        {
            days += 365;
        }
    }
    return days;
}

// days from 1 jan till 1 current month
void days_till_month(int year int month, int duration)
{
    // initial variables
    int days = 0;
    
    
    for (int months = 0; months < month; months++)
    {
        days += duration[months];
    }
    if (check_leapyears(year))
    {
        days++;
    }
    return days;
    
}


// check leapyears
bool check_leapyears(int years)
{
    if (years % 400 == 0)
    {
        if (years & 100 == 0)
        {
            return true;
        }
    }
    else if (years % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}


// print space based on first day 
void space_printer(int first_day)
{
    int number = 4 * first_day;
    
    for(i = 0; i < number; i++)
    {
        printf(" ");
    }
}

// print grid
void grid_printer(int month, int duration, int first_day)
{
    for (int day = 0; day <= duration[month]; day++)
    {
        if ((day + first_day) % 6 == 0)
        {
            printf("%3d\n", day);
        }
        else
        {
            printf("%3d ", day);
            
        }
    }
}