#include <stdio.h>
#include "dfs.h"
#include "bfs.h"
#include "queue.h"
#include "matrix.h"
#include "hashtable.h"
#include <stdlib.h>
#include "list.h"

int main(void)
{
    int matrix[3][3];
    int visited[3][3];
    struct node *head = NULL;
    struct node *tail = NULL;

    // Step 1: Read matrix from user
    printf("Enter elements for a 3x3 matrix:\n");
    createMatrix(3, 3, (int *)matrix);

    // Step 2: Display the matrix
    printf("\nYou entered the following matrix:\n");
    display(3, 3, (int *)matrix);

    // Step 3: Perform DFS Traversal
    makeVoid(3, 3, (int *)visited);

    dfs(0, 0, 3, 3, (int *)matrix, (int *)visited);

    // Step 4: Perform BFS Traversal
    makeVoid(3, 3, (int *)visited);

    bfs(0, 0, 3, 3, &head, &tail, (int *)matrix, (int *)visited);

    initHashTable();

    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(40, 4);
    insert(50, 5);
    insert(60, 6);
    printf("%d\n", getEntry(10));
    printf("%d\n", getEntry(20));
    printf("%d\n", getEntry(30));
    printf("%d\n", getEntry(40));
    printf("%d\n", getEntry(50));
    printf("%d\n", getEntry(60));

    removeEntry(10);
    removeEntry(20);
    removeEntry(30);
    removeEntry(40);
    removeEntry(50);
    removeEntry(60);

    printf("%d\n", getEntry(10));
    printf("%d\n", getEntry(20));
    printf("%d\n", getEntry(30));
    printf("%d\n", getEntry(40));
    printf("%d\n", getEntry(50));
    printf("%d\n", getEntry(60));

    struct linkedlist *list1 = (struct linkedlist *)malloc(sizeof(struct linkedlist *));
    list1->head = NULL;
    list1->tail = NULL;

    insertAtTail(&list1, 10);
    insertAtTail(&list1, 20);
    insertAtTail(&list1, 30);
    insertAtTail(&list1, 40);
    insertAtTail(&list1, 50);
    insertAtTail(&list1, 60);
    printf("\n");
    TraverseLinkedList(list1);

    deleteFromList(&list1, 10);
    printf("\n");
    TraverseLinkedList(list1);
    deleteFromList(&list1, 20);
    printf("\n");
    TraverseLinkedList(list1);
    deleteFromList(&list1, 30);
    printf("\n");
    TraverseLinkedList(list1);
    deleteFromList(&list1, 40);
    printf("\n");
    TraverseLinkedList(list1);
    printf("\n");
    TraverseLinkedList(list1);
    deleteFromList(&list1, 50);
    printf("\n");
    TraverseLinkedList(list1);
    deleteFromList(&list1, 60);
    printf("\n");
    TraverseLinkedList(list1);
    insertAtHead(&list1, 10);
    printf("\n");
    TraverseLinkedList(list1);
    return 0;
}
