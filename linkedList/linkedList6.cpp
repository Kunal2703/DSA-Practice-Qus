// Linked-List Deletion at the Last Node

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node * ptr)
{
    while (ptr != NULL)
    {
        cout << "Elements: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * deleteNodeAtLast(struct Node * head)
{
    // take two pointers i.e p & q .

    //one pointer at head
    struct Node * p = head;

    // and another pointer at head -> next
    struct Node * q = head -> next;

    //and move upto, when q -> next != NULL
    while (q -> next != NULL)
    {
        //move p and q
        p = p -> next;
        q = q -> next;
    }

    //when q approaches at NULL; then p -> next = NULL and then free q.
    p -> next = NULL;
    free(q);
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;

    cout <<"Linked List Before Deletion" << endl;
    linkedListTraversal(head);

    head = deleteNodeAtLast(head);
    cout <<"Linked List After Deletion at last Position" << endl;
    linkedListTraversal(head);
}