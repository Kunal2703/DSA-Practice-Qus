#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraverasl(struct Node * ptr)
{
    while (ptr != NULL)
    {
        cout << "Elements: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node* deteleAtIndex(struct Node * head, int index)
{
     // take two pointers i.e p & q .

    //one pointer at head
    struct Node * p = head;

    // and another pointer at head -> next
    struct Node * q = head->next;
    
    //move upto index-1
    for (int i = 0; i < index-1; i++)
    {

        //move p and q
        p = p ->next;
        q = q ->next;
    }

    //p->next linked to the q -> next and destroy link between them
    p -> next = q ->next;

    //and the free q
    free(q);

    return head;
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

    cout <<"Linked List Before Deletion" << endl;
    linkedListTraverasl(head);

    head = deteleAtIndex(head, 2);
    cout <<"Linked List After Deletion at index" << endl;
    linkedListTraverasl(head);

}