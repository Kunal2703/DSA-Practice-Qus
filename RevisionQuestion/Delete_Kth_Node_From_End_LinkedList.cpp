#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *removeKthNode(struct Node *head, int n) {
    struct Node *ptr = new Node();
    ptr -> next = head;

    struct Node *slow = ptr;
    struct Node *fast = ptr;

    for(int i = 1; i <= n; i++) {
        fast = fast -> next;
    }
    while(fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next;
    }
    slow -> next = slow -> next -> next;

    return ptr -> next;
}

void print(struct Node * head) {
    struct Node *curr = head;
    while(curr) {
        cout << curr->data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = fifth;

    fifth -> data = 5;
    fifth -> next = NULL;

    struct Node *result = removeKthNode(head, 2);
    print(result);

    return 0;
}