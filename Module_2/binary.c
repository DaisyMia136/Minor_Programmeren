#include <stdio.h> 

int to_decimal(int bit1, int bit2, int bit3, int bit4); 

int main(void) 
{ 
    int decimal = to_decimal(0,1,1,0,0,0,0,0);
    printf("%i\n", decimal);
} 

int to_decimal(int bit1, int bit2, int bit3, int bit4, int bit5, int bit6, int bit7, int bit8) 
{ 
    int decimal = bit1 * 8 + bit2 * 4 + bit3 * 2 + bit4;
    return decimal;
} 
    
