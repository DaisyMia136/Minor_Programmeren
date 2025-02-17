#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// function prototypes

int DNA_input(string DNA);
void print_RNA(string DNA);

// main script
int main(void)
{
    // ask input
    string DNA = get_string("DNA: ");
    int valid = DNA_input(DNA);
    
    if (valid == 1)
    {
        printf("Invalid DNA\n");
        return 1; // DNA contains non nucleotide
    }
    else if (valid == 2)
    {
        return 0; // DNA contains U
    }
    else
    {
        // print RNA
        print_RNA(DNA);
        return 0;
    }
    
}


//functions
int DNA_input(string DNA)
{
    int DNA_length = strlen(DNA);
    int U_counter = 0;
    int non_nucleotide_counter = 0;
    //input check
    for(int nucleotide = 0; nucleotide <= DNA_length - 1; nucleotide++)
    {
        printf("nucleotide %i\n", nucleotide);

        if (DNA[nucleotide] == 'U' || DNA[nucleotide] == 'u')
        {
            U_counter++;
            //printf("U counter %i\n", U_counter);

        }
        
        else if (DNA[nucleotide] != 'A' && DNA[nucleotide] != 'a' && DNA[nucleotide] != 'G' && DNA[nucleotide] != 'g' && DNA[nucleotide] != 'C' && DNA[nucleotide] != 'c' && DNA[nucleotide] != 'T' && DNA[nucleotide] != 't' && DNA[nucleotide] != 'U' && DNA[nucleotide] != 'u')
        {
            non_nucleotide_counter++;
            //printf("non nucleotide counter %i\n", non_nucleotide_counter);
            
        }
    }
    //printf("%i\n", non_nucleotide_counter);
    
    if(non_nucleotide_counter > 0)
    {
        return 1;
    }
    else if (U_counter > 0)
    {
        return 2;
    }
    else
    {
        return 0;
    }

}

void print_RNA(string DNA)
{
    // length input
    int DNA_length = strlen(DNA);
    
    // loop through DNA input
    for(int nucleotide = 0; nucleotide <= DNA_length - 1; nucleotide++)
    {
        
        // print RNA
        if(DNA[nucleotide] == 'A' || DNA[nucleotide] == 'a')
        {
            printf("U");
        }
        else if (DNA[nucleotide] == 'G' || DNA[nucleotide] == 'g')
        {
            printf("C");
        }
        else if (DNA[nucleotide] == 'C' || DNA[nucleotide] == 'c')
        {
            printf("G");
        }
        else if (DNA[nucleotide] == 'T' || DNA[nucleotide] == 't')
        {
            printf("A");
        }
 
    }
    
}
