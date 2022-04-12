//get integer from the user, and add it to a linked list

#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next:
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == 99999)
        {
            printf("\n");
            break;
        }
        // Alocate a new node
        node *n = malloc(sizeof(node));
        n->number = x;

        // Add new node to head of linked list
        n->next = list;
        list = n;
    }

    // Print all nodes
    for (node *ptr = list; ptr != NULL; ptr = ptr->next)
    {
        printf("%i\n", ptr->number);
    }
    // Free all nodes
    node *ptr = list;
    while (ptr != NULL)
    {
        node *tmp = ptr;
        ptr = ptr->next;
        free(tmp);
    }
}