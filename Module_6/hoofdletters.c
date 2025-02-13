#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

// function prototypes
int count_upper(string text);

// main script
int main(void)
{
   string text = get_string("Tekst: ");
   
   int hoofdletter_counter = count_upper(text);
   printf("%i", hoofdletter_counter);
   
   
   if (hoofdletter_counter == 1)
   { 
       printf("1 woord met een hoofdletter");
   } 
   else 
   { 
       printf("%i woorden met een hoofdletter", upper_counter);
   } 
   
}

// functions 
int count_upper(string text)
{
    int length_text = strlen(text);
    //printf("%i\n", length_text);
    
    int hoofdletter_counter = 0;

    
    if (isupper(text[0]) == 1)
    { 
        hoofdletter_counter = 1;
    } 
    
    
    for(int letter = 0; letter < length_text; letter++)
    {
        char character = text[letter];
        //printf("%c\n", character);
        if (isblank(character) == 1)
        { 
            char first_letter = text[letter + 1];
            //printf("%c", first_letter);
            if (isupper(first_letter) == 1)
            {
                hoofdletter_counter++;
            }
        } 
        
    } 
    return hoofdletter_counter;
}