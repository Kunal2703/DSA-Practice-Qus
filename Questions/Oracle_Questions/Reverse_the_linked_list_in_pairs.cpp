#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while(ptr != NULL) {
        cout  << ptr -> data << " ";
        ptr = ptr->next;
    }cout << endl;
}

struct Node *reversePair(struct Node * head) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    struct Node * current = head;

    while(current != NULL && current -> next != NULL) {
        temp -> data = current -> data;
        current -> data = current -> next -> data;
        current -> next -> data = temp -> data;

        current = current -> next -> next;
    }
    return head;
}

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    struct Node *second= (struct Node*)malloc(sizeof(struct Node));
    struct Node *third = (struct Node*)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node*)malloc(sizeof(struct Node));

    head-> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;

    cout << "Linked List before pairing: ";
    linkedListTraversal(head);

    cout << "Linked List after Pairing: ";
    head = reversePair(head);
    linkedListTraversal(head);

    return 0;
}