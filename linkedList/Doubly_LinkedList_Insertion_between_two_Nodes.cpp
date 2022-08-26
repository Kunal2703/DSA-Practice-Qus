#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

void doublyLinkedListTraversal(struct Node * head)
{
    struct Node * ptr = head;
    while (ptr != NULL)
    {
        cout<<"Elements: "<< ptr->data <<endl;
        ptr = ptr->next;
    }
}

void InsertionBetweenTwoNodes(struct Node * prev_node, int data)
{
    // allocate memory for newNode
    struct Node * newNode = (struct Node *) malloc(sizeof(struct Node));

    if(prev_node == NULL)
    {
        cout << "Previous Node != NULL" << endl;
        return ;
    }

    // assign data to newNode
    newNode-> data = data;

    newNode->next = prev_node->next;

    prev_node ->next = newNode;

    newNode-> prev = prev_node;

    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
    return;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node * )malloc(sizeof(struct Node));
    second = (struct Node * ) malloc(sizeof(struct Node));
    third = (struct Node * ) malloc(sizeof(struct Node));
    fourth = (struct Node * ) malloc(sizeof(struct Node));

    head -> data = 7;
    head -> next = second;
    head -> prev = NULL;

    second -> data = 11;
    second -> next = third;
    second -> prev = head;

    third -> data = 41;
    third -> next = fourth;
    third -> prev = second;

    fourth -> data = 66;
    fourth -> next = NULL;
    fourth -> prev = third;

    cout<<"Doubly Linked List before Insertion in between: "<<endl;
    doublyLinkedListTraversal(head);
    
    cout<<"Doubly Linked List after Insertion in between: "<<endl;
    InsertionBetweenTwoNodes(second, 78);
    doublyLinkedListTraversal(head);

}

