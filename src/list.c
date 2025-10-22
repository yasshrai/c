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

void deleteFromList(struct linkedlist **list, int data)
{
    struct list_node *current = (*list)->head;
    struct list_node *prev = NULL;
    while (current != NULL)
    {

        if (current->data == data)
        {
            if (!prev)
            {
                struct list_node *temp = current->next;
                (*list)->head = temp;
                free(current);
                return;
            }
            else
            {
                if (current->next == NULL)
                {
                    (*list)->tail = prev;
                }
                struct list_node *temp = current->next;
                prev->next = temp;
                free(current);
                return;
            }
        }
        prev = current;
        current = current->next;
    }
}
