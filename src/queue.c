#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

void append(struct node **head, struct node **tail, int row, int column)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->row = row;
    newnode->column = column;
    newnode->next = NULL;

    if (*head == NULL)
    {
        *head = newnode;
        *tail = newnode;
    }
    else
    {
        (*tail)->next = newnode;
        *tail = newnode;
    }
}

void popleft(struct node **head, struct node **tail)
{
    if (*head == NULL)
        return;

    struct node *temp = *head;
    *head = (*head)->next;

    if (*head == NULL)
    {
        *tail = NULL;
    }

    free(temp);
}
