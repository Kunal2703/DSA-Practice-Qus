#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *reverse(struct Node *head) {
    struct Node *curr = head;
    struct Node *prev = NULL;

    while(curr != NULL) {
        struct Node *temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

void print(struct Node *head) {
    struct Node*curr = head;
    while(curr != NULL) {
        cout << curr -> data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

int main() {
    struct Node * head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = NULL;
    
    struct Node *newHead = reverse(head);

    print(newHead);
    
    return 0;
}