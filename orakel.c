#include <cs50.h>
#include <stdio.h>
#include <string.h>

// function prototypes
bool check_answer(char * universal_answer);

//main function
int main(void)
{
    char * universal_answer = get_string("Wat is het antwoord op de grote vraag van het leven, het universum en alles daarbij? \n"); 
    //printf("%s\n", universal_answer);
    bool ultimate_knowlegde = check_answer(universal_answer);
    if (ultimate_knowlegde == true)
    {
        printf("Ja");
    }
    else 
    { 
        printf("Nee");
    } 
} 


//functions
bool check_answer(char * universal_answer)
{ 
    //set defaults 
    bool ultimate_knowlegde = false;
    
    // check if universal_answer is correct
    if (strcmp(universal_answer, "42") == 0 || strcmp(universal_answer, "tweeenenveertig") == 0 ||  strcmp(universal_answer, "forty two") == 0 || strcmp(universal_answer, "forty-two") == 0)  
    { 
        ultimate_knowlegde = true;
    } 
    return ultimate_knowlegde;
}