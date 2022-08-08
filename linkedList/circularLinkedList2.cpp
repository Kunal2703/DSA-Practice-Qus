#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void circularLinkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {
        cout <<"Elements: " << ptr->data << endl;
        ptr = ptr->next;
    } 
    while (ptr != head);
    
}

struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr -> data = data;
    struct Node * p = head -> next;
    while (p -> next != head)
    {
        p = p-> next;
    }

    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
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
    fourth -> next = head;

    cout <<"Circular Linked List Before Insertion" << endl;
    circularLinkedListTraversal(head);

    cout <<"Circular Linked List After Insertion" << endl;
    head = insertAtFirst(head, 101);
    head = insertAtFirst(head,111);
    circularLinkedListTraversal(head);

}