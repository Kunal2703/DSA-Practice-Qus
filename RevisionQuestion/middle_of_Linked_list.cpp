#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *middleElement(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast = head;

    while(fast && fast -> next) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;

}

void print(struct Node *head) {
    struct Node *curr = head;
    while(curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
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

    struct Node *middle = middleElement(head);

    cout<< "Middle Element is: " << middle->data << endl;

    return 0;
}