//Linked-List Insertion at the First position

#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node * ptr)
{
    while(ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtFirst(struct Node * head, int data)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
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
    head ->next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;

    cout <<"Before Insert"<<endl;
    linkListTraversal(head);
    head =  insertAtFirst(head, 56);
    cout <<"After Insert at First Position"<<endl;
    linkListTraversal(head);
}