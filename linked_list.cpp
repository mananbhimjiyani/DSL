#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* link;
};


int main() 
{
    Node* A;   // Head node
    A = NULL;   // Empty List

    Node* temp = new Node(); // EQUIVALENT TO: C : (Node*)malloc(sizeof(Node));

    temp->data = 2;
    temp->link = NULL;
    A = temp;

    temp = new Node();
    temp->data = 4;
    temp->link = NULL;

    Node* temp1 = A;
    while (temp1->link != NULL)
    {
        temp1 = temp1->link;
    }

    temp1->link = temp;
    cout << temp << endl;
    
}