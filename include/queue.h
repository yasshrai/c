#ifndef QUEUE_H
#define QUEUE_H

struct node
{
    int row;
    int column;
    struct node *next;
};

void append(struct node **head, struct node **tail, int row, int column);
void popleft(struct node **head, struct node **tail);

#endif