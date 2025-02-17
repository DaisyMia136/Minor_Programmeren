#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>

// function prototypes
void print_RNA(string DNA);


// main script
int main(void)
{
    // ask input
    string DNA = get_string("DNA: ");
    
    //input check
    //main returns 1!!
    
    // print RNA
}


//functions
int print_RNA(string DNA)
{
    // length input
    int DNA_length = strlen(DNA);
    
    // loop through DNA input
    for(int nucleotide = 0; nucleotide <= DNA_length; nucleotide++)
    {
        // input check
        //if input contains U or other non A, C, G, T value return 1
        //else return 0
        
        // print RNA
        
        
 
    }
    
}
