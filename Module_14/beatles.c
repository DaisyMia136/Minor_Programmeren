#include <stdio.h>
#include <cs50.h>

// function prototypes
void print_struct(struct musician john);

struct musician 
{
    string name;
    string instrument;
    int year_born;
};

int main()
{
    // Step 1: Create a 'john' variable
    struct musician john;
    // Step 2: Set the fields to the appropriate values
    john.name = "John";
    john.instrument = "guitar, vocals";
    john.year_born = 1940;
    
    // Step 4: Call the print function on 'john'

}

// functions
// Step 3: create a print function
void print_struct(struct musician john)
{
    char *print_name = john.name;
    printf("Name: %s", print_name);
}


