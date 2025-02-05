#include <stdio.h> 

// functions prototypes
void print_byte(int number);

// main script
int main(void)
{
    int number = 234;
    //void print_byte(int number); 
    int bit[] = {0, 0, 0, 0, 0, 0, 0, 0};
    int counter = 0;
    if (number > 255 || number < 0)
    { 
        printf("Please input a number between 0 and 255");
    } 
    for (int i = 128; i >= 1; i = i / 2 )
    {
        //printf("Counter is %i\n", counter);
        //printf("Number is %i\n", number);
        //printf("i is %i\n", i);
        int remainder = number - i;  
        //printf("remainder is %i\n", remainder);
        if (remainder >= 0) 
        { 
            bit[counter] = 1;
            //printf("Current bit is %d\n",bit[counter]);
            number = remainder; //127                     
            printf("%d", bit[counter]);
        } 
        else 
        { 
            printf("%d", bit[counter]);
        } 
        counter++;
            
    } 
}


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
            //printf("Current bit is %d\n",bit[counter]);
            number = remainder; //127                     
            printf("%d", bit[counter]);
        } 
        else 
        { 
            printf("%d", bit[counter]);
        } 
        counter++;
            
    } 
}







