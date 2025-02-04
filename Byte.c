#include <stdio.h> 

// functions prototypes


// main script
int main(void)
{
   void print_byte(int number); 
    
}


void print_byte(int number); 
{
    
    int bit1 = number - 128;
    int bit2 = number - 64;
    int bit3 = number - 32;
    int bit4 = number - 16;
    int bit5 = number - 8;
    int bit6 = 0;
    int bit7 = 0;
    int bit8 = 0