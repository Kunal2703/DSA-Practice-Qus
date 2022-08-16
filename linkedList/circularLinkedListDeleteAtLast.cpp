#include<iostream>
using namespace std;

struct Node 
{
    int data;
    struct Node * next;
};

void CircularLinkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    do
    {  
        cout<<"Elements "<<ptr->data << endl;
        ptr = ptr->next;
    }
    while (ptr != head);
    
}

void delete_node_at_last(struct Node * head)
{
    struct Node * temp = head;
    struct Node * current = head;

    if(head == NULL)
    {
        cout<<"List Empty "<<endl;
        return;
    }
    while (current -> next != head)
    {
        temp = current;
        current = current -> next;
    }

    temp -> next = current -> next;
    free(current);
    return;
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

    cout << "\nCircular Linked List Before Deletion" << endl;
    CircularLinkedListTraversal(head);

    delete_node_at_last(head);
    cout << "Circular Linked List After Deletion at Last Node" << endl;   
    CircularLinkedListTraversal(head);
}