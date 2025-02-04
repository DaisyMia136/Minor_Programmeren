#include <stdio.h> 

// functions prototypes
void print_byte(int number);

// main script
int main(void)
{
    //int bit_values[] = {128, 64, 32, 16, 8, 4, 2, 1}; 
    int number = 65;
    void print_byte(int number); 
    
}


void print_byte(int number) 
{
    // initiate bit 
    int bit[] = {0, 0, 0, 0, 0, 0, 0, 0};
    printf("%i\n", bit[0]);
    int counter = 0;
    for (int i = 1; 1 > 128; i = i * 2)
    {
        
        int remainder = number - i; // remainder = 255 - 128 
        if (remainder >= 0) 
            { 
                bit[counter] = 1;
                number = remainder; //127 
                counter++;
                printf("%i\n", bit);
            } 
        
    } 
} 
// // initiate all bits as 0    
//     int bit1 = 0;
//     int bit2 = 0;
//     int bit3 = 0;
//     int bit4 = 0;
//     int bit5 = 0;
//     int bit6 = 0;
//     int bit7 = 0;
//     int bit8 = 0;