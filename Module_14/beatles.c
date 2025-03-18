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
    beatles[0].name = "John";
    beatles[0].instrument = "guitar, vocals";
    beatles[0].year_born = 1940;
    
    beatles[1].name = "Paul";
    beatles[1].instrument = "bass, vocals";
    beatles[1].year_born = 1942;
    
    beatles[2].name = "George";
    beatles[2].instrument = "guitar, vocals";
    beatles[2].year_born = 1943;
    
    beatles[3].name = "Ringo";
    beatles[3].instrument = "drums";
    beatles[3].year_born = 1940;
    
    
    // Step 4: Call the print function on 'john'
    print_struct(beatles);
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


