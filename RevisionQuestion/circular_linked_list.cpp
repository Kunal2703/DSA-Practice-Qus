#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void circularLinkedListTraversal(struct Node* head) {
    struct Node* ptr = head;
    do {
        cout << ptr->data << " ";
        ptr = ptr -> next;
    }
    while(ptr != head);
}

int main() {
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));

    head -> data = 4;
    head -> next = second;

    second -> data = 6;
    second -> next = third;

    third -> data = 12;
    third -> next = fourth;

    fourth -> data = 16;
    fourth -> next = head;

    circularLinkedListTraversal(head);
    cout << endl;
    return 0;

}
