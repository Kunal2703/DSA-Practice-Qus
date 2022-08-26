#include<iostream>
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
        cout<<"Elements " << ptr->data <<endl;
        ptr = ptr->next;
    }
}


void addNode(struct Node * head, int data)

{
    struct Node * tail = NULL;
    struct Node * newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = data;
    newNode->next = NULL;

    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void sortLinkedList(struct Node * head)
{
    struct Node * current = head;
    struct Node * index = NULL;
    int temp;

    if(head == NULL)
    {
        return;
    }
    else
    {
        while(current != NULL)
        {
            index = current->next;

            while(index != NULL)
            {
                if(current->data == index->data)
                {
                    temp = current->data;
                    current ->data = index->data;
                    index ->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
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

    head ->data = 7;
    head ->next = second;

    second -> data = 11;
    second -> next = third;

    third -> data = 5;
    third -> next = fourth;

    fourth -> data = 2;
    fourth -> next = NULL;

    linkedListTraversal(head);

    sortLinkedList(head);

    linkedListTraversal(head);
}