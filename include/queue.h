#ifndef QUEUE_H
#define QUEUE_H

/**
 * Node structure for a linked-list queue.
 * Stores the row and column of a matrix cell.
 */
struct node
{
    int row;           // Row index of the cell
    int column;        // Column index of the cell
    struct node *next; // Pointer to the next node in the queue
};

/**
 * Appends a new node with (row, column) to the end of the queue.
 *
 * @param head  Pointer to the head of the queue
 * @param tail  Pointer to the tail of the queue
 * @param row   Row index to add
 * @param column Column index to add
 */
void append(struct node **head, struct node **tail, int row, int column);

/**
 * Removes the node at the front of the queue.
 *
 * @param head  Pointer to the head of the queue
 * @param tail  Pointer to the tail of the queue
 *
 * After calling, the node at the front is freed and head is updated.
 * If the queue becomes empty, tail is set to NULL.
 */
void popleft(struct node **head, struct node **tail);

#endif 
