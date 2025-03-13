#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function prototypes
char * strchr_(char *word, char *letter);

// main script
int main(int argc, char *argv[])
{
    // input checks
    if (argc < 2)
    {
        printf("not enough input arguments");
    }
    
    if (strcmp(argv[2], "\0") == 0)
    {
        return 0;
    }
    
    // 
    char *pointer = strchr_(argv[1], argv[2]);
    
    if (pointer == NULL)
    {
        return 1;
    }
    
    printf("%s\n", pointer);
    
}

// functions
char * strchr_(char *word, char *letter)
{
    int lenght = strlen(word);
    int index_letter = lenght + 2;
    // loop through word and find the first instance of letter
    for (int i = 0; i < lenght; i++)
    {
        //printf("%c", word[i]);
        if (word[i] == letter[0])
        {
            index_letter = i;
            break;
        }
    }
    if (index_letter > lenght)
    {
        return NULL;
    }
    //printf("%c", word[index_letter]);
    // return pointer to first instance of letter
    return &word[index_letter];
    
}
