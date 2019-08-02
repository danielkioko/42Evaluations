#include <unistd.h>

// struct      LinkedList
// {
//     int data;
//     struct LinkedList *next;
//     // struct LinkedList comes before *next because it's self referencing
// };

//typedef is used to define a data type in C
//malloc is used to dynamically allocate a signle block of memory in C, it is available in the header file stdlib.h
//sizeof is used to deetrmine size in bytes of an element in C. Here it is used to determine size of each node and sent as a parameter to malloc

typedef struct LinkedList *node;

node createNode() 
{
    node temp; //Declare a Node
    temp = (node)malloc(sizeof(struct LinkedList)); //Allocate memory using malloc()
    temp -> next = NULL; //Add element's value to data part of node
    
    if (head == null)
    {
        head = temp;
    }
    else
    {
        p = head;
        while (p -> next !=  NULL)
        {
            p = p -> next;
            // Transverse the list until p is the last node.
            //The last node always points to NULL
        }
        p -> next = temp; //Point the previous node to the new one created.
    }
}