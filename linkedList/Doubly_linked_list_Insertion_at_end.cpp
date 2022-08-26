#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
    struct Node * prev;
};

void doublyLinkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr != NULL)
    {
        cout << "Elements: "<< ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node * insertAtEnd(struct Node * head, int data)
{
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node * temp = head;
    
    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {
        newNode -> prev = NULL;
        head = newNode;
        
        return head;
    }

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;

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
    head -> prev = NULL;

    second -> data = 11;
    second -> next = third;
    second -> prev = second;

    third -> data = 41;
    third -> next =  fourth;
    third -> prev = third;

    fourth -> data = 66;
    fourth -> next = NULL;
    fourth -> prev = head;

    cout << "\nDoubly Linked List Before Insertion at End" << endl;
    doublyLinkedListTraversal(head);

    cout << "\nDoubly Linked List After Insertion at End" << endl;
    head = insertAtEnd(head, 85);
    head = insertAtEnd(head, 115);
    doublyLinkedListTraversal(head);

}

