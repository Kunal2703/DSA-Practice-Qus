// Linked-List Deletion at First Position

#include <iostream>
using namespace std;
struct Node {
    int data;
    struct Node * next;
};

void linkedListTraverasl(struct Node * ptr)
{
    while (ptr != NULL)
    {
        cout << "Elements: " << ptr->data << endl;

        ptr = ptr -> next;
    }

}

struct Node * deleteAtFirst(struct Node * head)
{
    //take one pointer i.e ptr and point to the head
    struct Node * ptr = head;

    // and then move head to the next
    head = head -> next;

    // then free ptr, i.e first node
    free(ptr);
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;



    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;


    second -> data = 11;
    second -> next = third;

    third -> data = 47;
    third -> next = fourth;

    fourth -> data = 66;
    fourth -> next = NULL;

    cout <<"Linked List Before Deletion" << endl;
    linkedListTraverasl(head);

    head = deleteAtFirst(head);
    cout <<"Linked List After Deletion at First Position" << endl;
    linkedListTraverasl(head);
}