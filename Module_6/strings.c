#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

// function prototypes
void vertical(string input);
void skip(string input);
void eek(string input);
void bob(string input);

// main script
int main(void)
{
    bob("know your meme");
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
        if(input[i] == 'e' || input[i] == 'E')
        {
            e_counter++;
        }
    }
    printf("The text \"%s\" contains %i e's.\n", input, e_counter);
}

void bob(string input)
{
    int lengte = strlen(input);
    for(int i = 0; i < lengte; i++)
    {
        
        if (i%2 == 0 || i == 0)
        { 
            printf("%c", input[i]);
        }
        if (i%2 != 0)
        {
            printf("%c", toupper(input[i]));
        } 

    } 
}