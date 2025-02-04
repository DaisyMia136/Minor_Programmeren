#include <stdio.h>
#include <cs50

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("Hello, %s\n", answer);
}
