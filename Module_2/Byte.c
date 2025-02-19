#include <stdio.h> 

// functions prototypes
void print_byte(int number);

// main script
int main(void)
{
    int number = 48; // a number between 0 and 255
    
    print_byte(number); 
            
     
}

// functions 
void print_byte(int number) 
{ 
    int bit[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int counter = 0;
    for (int i = 128; i >= 1; i = i / 2 )
    {
        //printf("Counter is %i\n", counter);
        //printf("Number is %i\n", number);
        //printf("i is %i\n", i);
        
        int remainder = number - i; // remainder = 255 - 128 
        //printf("remainder is %i\n", remainder);
        if (remainder >= 0) 
        { 
            bit[counter] = 1;
            //printf("Current bit is %i\n",bit[counter]);
            number = remainder; //127                     
            printf("%i", bit[counter]);
        } 
        else 
        { 
            printf("%i", bit[counter]);
        } 
        counter++;
            
    } 
}







