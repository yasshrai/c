#ifndef LIST_H
#define LIST_H

struct list_node
{
    struct list_node *prev;
    struct list_node *next;
    int data;
};

// Basic doubly linked list
struct linkedlist
{
    struct list_node *head;
    struct list_node *tail;
    unsigned int length;
};

/**
 * Inserts a value at the end (tail) of the linked list.
 *
 * @param list  Pointer to the linked list
 * @param data  Value to insert
 */
void insertAtTail(struct linkedlist **list, int data);

/**
 * Traverses the linked list and prints or processes each node's data.
 *
 * @param list  Pointer to the linked list
 */
void TraverseLinkedList(struct linkedlist *list);

/**
 * Inserts a value at the beginning (head) of the linked list.
 *
 * @param list  Pointer to the linked list
 * @param data  Value to insert
 */
void insertAtHead(struct linkedlist **list, int data);

/**
 * Delete First occurrence of a value  from the beginning (head) of the linked list.
 *
 * @param list  Pointer to the linked list
 * @param data  Value to deleted
 */
void deleteFromList(struct linkedlist **list, int data);

#endif
