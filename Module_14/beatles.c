#include <stdio.h>
#include <cs50.h>



struct musician 
{
    string name;
    string instrument;
    int year_born;
};

// function prototypes
void print_struct(struct musician john);

int main()
{
    // Step 1: Create a 'john' variable
    struct musician john[4];
    // Step 2: Set the fields to the appropriate values
    john[0].name = "John";
    john[0].instrument = "guitar, vocals";
    john[0].year_born = 1940;
    
    // Step 4: Call the print function on 'john'
    print_struct(struct musician john)
}

// functions
// Step 3: create a print function
void print_struct(struct musician john)
{
    char *print_name = john.name;
    printf("Name: %s", print_name);
}


