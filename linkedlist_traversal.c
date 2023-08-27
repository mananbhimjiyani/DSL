#include <stdio.h> 
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr) {
    
    while (ptr != NULL)
    {
        printf("Value of Node: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main() {
    
    struct Node *head;
    struct Node *second;
    struct Node *third;

    // Allocating memory for nodes in the linked list in Heap (Dynamic):
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = NULL;

    traversal(head);

    return 0;
}