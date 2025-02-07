#include <stdio.h>
#include <cs50.h>
#include <string.h>

// function prototypes

//main script
int main(void)
{
    // set defaults
    string input1 = get_string("");
    int input3 = 0;
    
    int i = 1;
    while (i == 1)
    { 
        if (isdigit(input1) == 1)
            //input1 == 0 || input1 == 1 || input1 == 2 || input1 == 3 || input1 == 4 || input1 == 5 || input1 == 6 || input1 == 7 || input1 == 8 || input1 == 9)
        {
            // ask for input2
            string input2 = get_string("");
            if (strcmp(input2, "+") == 0 || strcmp(input2, "-")  == 0 || strcmp(input2, "/")  == 0 || strcmp(input2, "*") == 0)
            { 
                // ask for input3
                input3 = get_int("");
                    if (input3 == 0 || input3 == 1 || input3 == 2 || input3 == 3 || input3 == 4 || input3 == 5 || input3 == 6 || input3 == 7 || input3 == 8 || input3 == 9)
                        {
                            // do calc
                            int output = 0;
                            if (strcmp(input2, "+") == 0)  
                            {
                                output = input1 + input3;
                            }
                            else if (strcmp(input2, "-") == 0) 
                            {
                                output = input1 - input3;
                            }
                            else if (strcmp(input2, "/") == 0)
                            {
                                output = input1 / input3;                   
                            }
                            else if (strcmp(input2, "*") == 0)
                            {
                                output = input1 * input3;
                            }
                            printf("=%i\n", output);
                            input1 = output;
                            
                        }
                    else
                    { 
                        input3 = get_int("");
                    } 
            }
            else 
            { 
                input2 = get_string("");
            } 
            
        } 
        else 
        { 
            input1 = get_int("");
        } 
        
    }    
}
//functions