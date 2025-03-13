#include <stdio.h>
#include <stdlib.h>

// function prototypes
char * strchr_(char *word, char letter);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc < 2)
    {
        printf("not enough input arguments");
    }
    
    // 
    pointer = strchr_(argv[1], argv[2]);
    
}

// functions
char * strchr_(char *word, char letter)
{
    // loop through word and find the first instance of letter
    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (word[i] == letter)
        {
            break;
        }
    }
}
