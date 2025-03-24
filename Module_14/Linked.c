#include <stdio.h>
#include <stdlib.h>

// our struct
typedef struct node
{
    int number;
    struct node* next;
} node;

void insert(int number);
void print_list();

// pointer to the head node
struct node *head = NULL;

int main (void)
{
    int array[] = {};
    int n = sizeof(array)/sizeof(int);

    for (int i = 0; i < n; i++) 
    {
        insert(array[i]);
    }

    print_list();
}

void insert(int number)
{
    // TODO: your code here
    // make pointer to list
    node *list = NULL;
    
    // make a pointer to a temporary node element
    node *n = malloc(sizeof(node));
    
    // check if memory for n was successfully found
    if (n != NULL)
    {
        (*n).number = number;
        (*n).next = NULL;
    }
    
    *list = 
    
}

// prints a linked list
void print_list()
{
    struct node *cursor = head;

    printf("\n[");

    // TODO: your code here

    printf("]\n");
}