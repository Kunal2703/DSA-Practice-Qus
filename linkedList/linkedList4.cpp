// Linked List Insert In Between 

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
};

void linkedlistTraversal(struct Node * ptr)
{
    while (ptr != NULL)
    {
        cout <<"Element: "<< ptr -> data << endl;
        ptr = ptr -> next;
    }
}

struct Node * insertAtBetween(struct Node * head, int data, int index)
{
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    {
        struct Node * p = head;
        int i = 0;

        while (i != index-1)
        {
            p = p -> next;
            i++;

        }
        ptr -> data = data;
        ptr -> next = p -> next;
        p -> next = ptr;
        return head;
        
    }
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    //Allocate meemory for node in Linked List in Heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    //link to the first and second nodes
    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;
    cout <<"Linked List Before Insertion" << endl;
    linkedlistTraversal(head);

    cout <<"Linked List After Insertion" << endl;
    head = insertAtBetween(head, 101, 3);
    head = insertAtBetween(head, 221, 5);
    linkedlistTraversal(head);
}