#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

// function prototypes
void vertical(string input);
void skip(string input);
void eek(string input);

// main script
int main(void)
{
    string input = "Eek a mouse !";
    //vertical(input);
    //skip(input);
    eek(input);
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
    int e_counter = 0;
    for(int i = 0; i < lengte; i++)
    {
        character = input[i];
        if(strcasecmp(character, "e") == 0)
        {
            e_counter++;
        }
    }
    printf("The text %s contains %i e's.\n", input, e_counter)
}