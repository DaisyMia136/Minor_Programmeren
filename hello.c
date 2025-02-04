#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string answer = get_string("What's your name? "); //ask for persons name using get_string and save it in answer as a string
    printf("Hello, %s\n", answer); // combine 
}
