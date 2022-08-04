//LinkedList Creation and Traversal

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

void linklistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout <<"Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
    
}
int main()

{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

//Allocate memory for nodes in the linked list in Heap
head = (struct Node *) malloc(sizeof(struct Node));
second = (struct Node *) malloc(sizeof(struct Node));
third = (struct Node *) malloc(sizeof(struct Node));
fourth = (struct Node *) malloc(sizeof(struct Node));

//link first and second nodes
head->data = 7;
head->next = second;

//link second and third nodes
second ->data = 11;
second ->next = third;

//link third and fourth nodes
third ->data = 41;
third ->next = fourth;

//terminate the linked list at the fourth node
fourth ->data = 66;
fourth ->next = NULL;

linklistTraversal(head);
return 0;
}