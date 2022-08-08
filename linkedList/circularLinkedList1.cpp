#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node * next;
};

void circularLinkedListTraverasal(struct Node * head)
{
    //take a pointer ptr and point to the head
    struct Node * ptr = head;

    do{
        cout <<"Elements: " << ptr->data << endl;
        ptr = ptr->next;
    }
    //ptr move upto, when ptr again not comes on head
    while(ptr != head);
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 41;
    third -> next = fourth;

    fourth -> data = 66;

    //******
    fourth -> next = head;


    circularLinkedListTraverasal(head);
}