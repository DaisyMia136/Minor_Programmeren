#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// function prototypes
void vertical(string input);
void skip(string input);

// main script
int main(void)
{
    string input = "Great, gifts";
    vertical(input);
    skip(input);
}

// functions 
void vertical(string input)
{ 
    int lengte = strlen(input);
    for(int i = 0; i < lengte; i++)
    {
        printf("%c\n", input[i]);
    } 
} 

void skip(string input)
{
    int lengte = strlen(input);
    for(int i = 0; i < lengte; i += 2)
    { 
        printf("%c", input[i]);
    } 
} 

void eek(string input)
{
    int lengte = strlen(input);
    for(int i = 0; i < lengte; i++)

}