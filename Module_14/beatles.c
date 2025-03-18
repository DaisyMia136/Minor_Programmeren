#include <stdio.h>
#include <cs50.h>



struct musician 
{
    string name;
    string instrument;
    int year_born;
};

// function prototypes
void print_struct(struct musician beatles[4]);

int main()
{
    // Step 1: Create a 'john' variable
    struct musician beatles[4];
    // Step 2: Set the fields to the appropriate values
    john[0].name = "John";
    john[0].instrument = "guitar, vocals";
    john[0].year_born = 1940;
    
    john[1].name = "Paul";
    john[1].instrument = "bass, vocals";
    john[1].year_born = 1942;
    
    john[2].name = "George";
    john[2].instrument = "guitar, vocals";
    john[2].year_born = 1943;
    
    john[3].name = "Ringo";
    john[3].instrument = "drums";
    john[3].year_born = 1940;
    
    
    // Step 4: Call the print function on 'john'
    print_struct(john);
    //print_struct(john[1]);
    //print_struct(john[2]);
    //print_struct(john[3]);
    
}

// functions
// Step 3: create a print function
void print_struct(struct musician john[4])
{
    for (int i = 0; i < 4; i++)
    {
        printf("Name:       %s\n", john[i].name);
        printf("Instrument: %s\n", john[i].instrument);
        printf("Born:       %i\n", john[i].year_born);
        printf("\n");
    }
}


