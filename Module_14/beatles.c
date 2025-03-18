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
    
    john[1].name = "Paul";
    john[1].instrument = "guitar, vocals";
    john[1].year_born = 1940;
    
    // Step 4: Call the print function on 'john'
    print_struct(john[0]);
    
}

// functions
// Step 3: create a print function
void print_struct(struct musician john)
{
    printf("Name:       %s\n", john.name);
    printf("Instrument: %s\n", john.instrument);
    printf("Born:       %i\n", john.year_born);
}


