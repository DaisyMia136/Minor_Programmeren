#include <stdio.h> 

int to_decimal(int bit1, int bit2, int bit3, int bit4); 

int main(void) 
{ 
    int decimal = to_decimal(1,1,1,1,1,0,1,1,0);
    printf("%i\n", decimal);
} 

int to_decimal(int bit1, int bit2, int bit3, int bit4) 
{ 
    int decimal = bit1 * 8 + bit2 * 4 + bit3 * 2 + bit4;
    return decimal;
} 
    
