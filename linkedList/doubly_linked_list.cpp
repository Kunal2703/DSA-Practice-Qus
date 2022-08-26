#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * pre;
    struct Node * next;
};

void doublyLinkedList(struct Node * ptr)
{
    while (ptr!=NULL)
    {
        cout<<"Elements: "<< ptr -> data<<endl;
        ptr = ptr->next;

    }
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

    doublyLinkedList(head);

}