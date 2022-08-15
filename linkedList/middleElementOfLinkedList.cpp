//Find the Middle_element of the Linked List

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
void Middle_element(struct Node *head)  
{  
    struct Node *slow_ptr = head;  
    struct Node *fast_ptr = head;  
  
    if (head != NULL)  
    {  
        //Traverse the linked list
        while (fast_ptr != NULL && fast_ptr -> next != NULL)  
        {  
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next;  
            
        }  
        cout<<"The middle element of this Linked List is: "<<slow_ptr -> data <<endl;  
    }  
}

int main()

{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * five;

//Allocate memory for nodes in the linked list in Heap
head = (struct Node *) malloc(sizeof(struct Node));
second = (struct Node *) malloc(sizeof(struct Node));
third = (struct Node *) malloc(sizeof(struct Node));
fourth = (struct Node *) malloc(sizeof(struct Node));
five = (struct Node *) malloc(sizeof(struct Node));

//link first and second nodes
head->data = 7;
head->next = second;

//link second and third nodes
second ->data = 11;
second ->next = third;

//link third and fourth nodes
third ->data = 41;
third ->next = fourth;

//link fourth and five nodes
fourth ->data = 66;
fourth ->next = five;

//terminate the linked list at the five node
five -> data = 101;
five ->next = NULL;

linklistTraversal(head);

Middle_element(head);

return 0;
}