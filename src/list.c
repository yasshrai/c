#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Creates a new linked list node with the given data.
 *
 * This function allocates memory for a new node, initializes its
 * `data` field with the given value, and sets `next` and `prev`
 * pointers to NULL.
 *
 * @param data  The value to store in the new node
 * @return      Pointer to the newly created node, or NULL if memory
 *              allocation fails
 */
static inline struct list_node *createNode(int data)
{
    struct list_node *newnode = (struct list_node *)malloc(sizeof(struct list_node));
    if (!newnode)
    {
        fprintf(stderr, "Memory allocation failed!\n");
        return NULL; // or handle as needed
    }
    newnode->data = data;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void insertAtTail(struct linkedlist **list, int data)

{
    struct list_node *newnode = createNode(data);
    if ((*list)->head == NULL)
    {
        (*list)->head = newnode;
        (*list)->tail = newnode;
    }
    else
    {
        (*list)->tail->next = newnode;
        newnode->prev = (*list)->tail;
        (*list)->tail = newnode;
    }
}

void TraverseLinkedList(struct linkedlist *list)
{
    struct list_node *current = list->head;
    while (current != NULL)
    {
        printf("%d->", current->data);
        current = current->next;
    }
}

void insertAtHead(struct linkedlist **list, int data)
{
    struct list_node *newnode = createNode(data);
    if ((*list)->head == NULL)
    {
        (*list)->head = newnode;
        (*list)->tail = newnode;
    }
    else
    {
        newnode->next = (*list)->head;
        (*list)->head = newnode;
    }
}