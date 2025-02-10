#include <stdio.h>

int times_two(int a);
void print_int(int a);
int half(int a);
void print_float(float b);
float average(float a, float c); 
float max(float a, float c);

int main(void)
{
    int x = 2;
    int y = times_two(x); // y = x times two
    print_int(y); // print int y 
    int halved = half(x); // halved = x devided by two
    print_int(halved); // print int halved 
    
    float e = max(12,15); // e is the maximal number of the inputted floats
    printf("%f\n", e); // print e 
    print_float(2.7444); // print the inputted float with 2 decimals 
    float d = average(4, 7); // print the average of the inputted floats as a float 
}

int times_two(int a)
{
    return a * 2; // use * to multiply numbers
}

void print_int(int a)
{
    printf("Value = %i\n", a); // print the inputted int a 
}

int half(int a)
{ 
    return a/2; // use / to divide numbers
} 

void print_float(float b)
{ 
    printf("%.2f\n", b); // %.2f indicates that 2 decimals of the float will be printed 
} 

float average(float a, float c) 
{ 
    float d = (a + c) / 2; 
    printf("%.1f\n", d); // print d with one decimal
    return d; 
} 

float max(float a, float c)
{ 
    if (a > c) // if a is greater than c
    {
        return a;
    } 
    else if (c > a) // if c is greater than a 
    { 
        return c;
    } 
    else // if c is equal to a 
    { 
        return printf("Please input two differnt numbers\n");
        
    } 
} 
