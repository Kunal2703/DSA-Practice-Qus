#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node * ptr)
{
    while (ptr != NULL)
    {
        cout <<"Elements "<< ptr->data << endl;
        ptr = ptr->next;
    }
}

void reverseLinkedList(struct Node * head)
{
    struct Node * prev = NULL;
    struct Node * curr = head;
    struct Node * temp;

    while (curr) //or (curr != NULL)
    {
        temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    
    temp = prev;
    while(temp)  //or (temp != NULL)
    {
        cout<<"Elements "<<temp->data<<endl;
        temp = temp->next;
    }
    
}


int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node ));
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
    cout<< "Linked List:" << endl;
    linkedListTraversal(head);

    cout<< "Reversed linked list:" << endl;
    reverseLinkedList(head);
}