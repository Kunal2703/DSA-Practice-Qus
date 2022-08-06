//Linked-List Insertion at the end position

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node * ptr)
{
    while(ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtLast(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));


    ptr -> data = data;
    //create a pointer --> point to head
    struct Node * p = head;

    //p move, whene next not equasl to null
    while(p -> next != NULL)
    {

        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = NULL;
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head =(struct Node *) malloc(sizeof(struct Node));
    second =(struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;


    cout << "Linked List before Insertion: "<< endl;
    linkedListTraversal(head);
    cout << "Linked List after Insertion at the End: "<< endl;
    head = insertAtLast(head, 101);
    head = insertAtLast(head, 111);
    linkedListTraversal(head);
    
}