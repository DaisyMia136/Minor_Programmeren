#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

//function prototypes
void display_calendar(int year, int month);
void display_header(int year, int month);
void display_grid(int year, int month);
int first_day(int year, int month);
int number_of_days_from_1800(int year, int month);
int days_till_year(int year, int month);
int days_till_month(int year, int month);
bool check_leapyears(int years);
void space_printer(int first_day);
void grid_printer(int month, int first_day);



// constants
const int start = 3; // the first day of january in 1800 was on a wednesday (3rd day)
string months[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"}; 
int duration[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

// main script
int main(void)
{
    
    int year = get_int("Year: ");
    int month = get_int("Month: ");
    
    // display calendar
    display_calendar(year, month);
    
}

//functions

// print calendar
void display_calendar(int year, int month)
{
    
    display_header(year, month);
    
    display_grid(year, month);
}
// print header
void display_header(int year, int month)
{
    printf("          %s %i\n---------------------------\nSun Mon Tue Wed Thu Fri Sat\n", months[month-1], year);
}

//print grit
void display_grid(int year, int month)
{
    
    // first day of the month
    int firstday = first_day(year, month);
    
    // number of days within month
    int month_days = duration[month - 1];
    
    // print spaces
    space_printer(firstday);
    // print grid
    grid_printer(month, firstday);
}

int first_day(int year, int month)
{
    // count number of days between current month and jan 1st number_of_days_from_1800
    int days_between = number_of_days_from_1800(year, month);
    
    int first_day = (days_between + start) % 7;
    //printf("%i", first_day);
    return first_day;
}

int number_of_days_from_1800(int year, int month)
{
    // calc years between 1800 and input years 
    int day_year = days_till_year(year, month);
    
    // calc days between 1st jan and 1st of inputted month
    int day_month = days_till_month(year, month);
    int days = day_year + day_month;
    return days;
}

int days_till_year(int year, int month)
{
    // initial variables
    bool leap = false;
    int days = 0;
    
    for(int years = 1800; years < year; years++)
    {
        // check if leap_year
        if (check_leapyears(years))
        {
            days += 366;
        }
        else 
        {
            days += 365;
        }
        
    }
    //printf("%i\n", days);
    return days;
}

// days from 1 jan till 1 current month
int days_till_month(int year, int month)
{
    // initial variables
    int days = 0;
    
    for (int i = 0; i <= month - 2; i++)
    {
        days += duration[i];
    }
    if (check_leapyears(year) && )
    {
        days++;
    }
    //printf("%i", days);
    return days;
    
}


// check leapyears
bool check_leapyears(int years)
{
    // initial variables
    bool leap = false; 
    
    if (years % 100 == 0)
    {
        if (years % 400 == 0)
        {
            leap = true; 
        }
    }
    else if (years % 4 == 0)
    {
        leap = true; 
    }

        return leap;
    
}


// print space based on first day 
void space_printer(int first_day)
{
    int number = first_day - 1;
    string space = "   ";
    for(int i = 0; i <= number; i++)
    {
        printf("%s ", space);
    }
}

// print grid
void grid_printer(int month, int first_day)
{
    for (int day = 1; day <= duration[month - 1]; day++)
    {
        if ((first_day + day) % 7 == 0)
        {
            printf("%3d\n", day);
        }
        else
        {
            printf("%3d ", day);
            
        }
    }
    printf("\n");
}