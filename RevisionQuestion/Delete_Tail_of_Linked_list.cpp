#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while(ptr != NULL) {
        cout << ptr -> data<< " ";
        ptr = ptr -> next;
    }
}

struct Node *deleteTail(struct Node *head) {
    struct Node *p = head;
    struct Node *q = head -> next;

    while(q -> next != NULL) {
        p = p -> next;
        q = q -> next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 4;
    head -> next = second;

    second -> data = 7;
    second -> next = third;

    third -> data = 11;
    third -> next = fourth;

    fourth -> data = 15;
    fourth -> next = NULL;

    head = deleteTail(head);
    linkedListTraversal(head);
    cout << endl;
    return 0;
}
