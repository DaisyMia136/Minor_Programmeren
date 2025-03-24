#include <stdio.h>
#include <stdlib.h>

// our struct
typedef struct node
{
    int number;
    struct node* next;
} node;

void insert(int number);
void print_list(int length);

// pointer to the head node
struct node *head = NULL;

int main (void)
{
    int array[] = {2,3,4,5};
    int n = sizeof(array)/sizeof(int);

    for (int i = 0; i < n; i++) 
    {
        //printf("%i", array[i]);
        insert(array[i]);
    }

    print_list(n);
}

void insert(int number)
{
    // TODO: your code here

    // make a pointer to a temporary node element
    node *n = malloc(sizeof(node));
    
    // check if memory for n was successfully found
    if (n != NULL)
    {
        (*n).number = number;
        (*n).next = NULL;
        
        if (n->next != NULL)
        {
            n->next = head;
        }
        head = n;
    }
}

// prints a linked list
void print_list(int length)
{
    struct node *cursor = head;

    printf("\n[");

    // TODO: your code here
    for(int i = length; i > 0; i--)
    {
        
        // find last content of list 
        int j = 0;
        node *temp = head; 
        while (j != i)
        {
            temp = temp->next;
            j++;
        }
        
        int number = temp->number;
        
        
        if (i == length)// last number in list
        {
            // dont print comma
            printf(" %i", number);
        }
        else
        {
            // do print comma
            printf(" %i,", number);
        }
    }
    
    printf("]\n");
}