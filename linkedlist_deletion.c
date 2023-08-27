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

struct Node * start_delete(struct Node *head) {
    
    struct Node *ptr = head;

    head = head->next;
    free(ptr);
    return head;
}

struct Node * between_delete(struct Node *head, int index) {

    struct Node *p = head;
    struct Node *q = head->next;

    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }

    p->next = q->next;
    free(q);
    return head;
}

struct Node * end_delete(struct Node *head) {

    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    p->next = NULL;
    free(q);
    return head;
}

struct Node *  value_delete(struct Node *head, int value) {

    struct Node *p = head;
    struct Node *q = head->next;

    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    
    return head;
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

    printf("Linked list before any deletion: \n");
    traversal(head);
    
    
    // head = start_delete(head);
    // head = between_delete(head, 1);
    // head = end_delete(head);
    head = value_delete(head, 4);
    printf("\nLinked list after deletion: \n");
    traversal(head);

    return 0;
}