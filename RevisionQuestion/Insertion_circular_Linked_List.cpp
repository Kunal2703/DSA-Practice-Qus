#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

void circularLinkedListTraversal(struct Node* head) {
    struct Node* ptr = head;
    do {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    while(ptr != head);
}

struct Node* insertAtFirst(struct Node* head, int data) {
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;

    struct Node* p = head -> next;
    while(p -> next != head) {
        p = p -> next;
    }
    p -> next = ptr;
    ptr -> next = head;
    head = ptr;
    return ptr;
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 4;
    head -> next = second;

    second -> data = 3;
    second -> next = third;

    third -> data = 6;
    third -> next = fourth;

    fourth -> data = 1;
    fourth -> next = head;

    cout << "before Insert: ";
    circularLinkedListTraversal(head);
    head = insertAtFirst(head, 9);
    cout << "\nafter Insert: ";
    circularLinkedListTraversal(head);
    cout << endl;

    return 0;
}