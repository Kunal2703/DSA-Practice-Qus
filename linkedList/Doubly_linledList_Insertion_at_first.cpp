#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * pre;
    struct Node * next;
};

void doublyLinkedList(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr!=NULL)
    {
        cout<<"Elements: "<< ptr -> data <<endl;
        ptr = ptr->next;

    }
}

//Insertion at Front of doubly Linked List
struct Node * insterAtFirst(struct Node * head, int data)
{
    //allocate memory for New node
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

   //assign data to new node
    newNode->data = data;

    //new node is head
    newNode->next = head;

    //and previous is null
    newNode->pre = NULL;

    if(head != NULL)
    {
        //previous of head is new node
        head->pre = newNode;
    }

    //head points to new node
    head = newNode;
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
    head -> pre = NULL;
    head -> next = second;

    second -> data = 11;
    second -> pre = head;
    second -> next = third;

    third -> data = 41;
    third -> pre = second;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> pre = third;
    fourth -> next = NULL;

    cout << "\nDoubly Linked List Before Insertion at First" << endl;
    doublyLinkedList(head);

    cout << "\nDoubly Linked List After Insertion at First" << endl;
    head = insterAtFirst(head,101);
    head = insterAtFirst(head,88);
    doublyLinkedList(head);

}