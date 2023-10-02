#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *mergeTwoLists(struct Node *head1, struct Node *head2) {
    struct Node * head = new Node;
    head -> data = 0;

    struct Node * temp = head;

    while(head1 != NULL && head2 != NULL) {
        if(head1 -> data <= head2 -> data) {
            temp -> next = head1;
            head1 = head1 -> next;
        }
        else {
            temp -> next = head2;
            head2 = head2 -> next;
        }
        temp = temp -> next;
    }
    if(head1 != NULL) {
        temp -> next = head1;
    }
    if(head2 != NULL) {
        temp -> next = head2;
    }
    return (head -> next);

}

void print(struct Node *head) {
    struct Node *curr = head;
    while(curr) {
        cout << curr -> data << " ";
        curr = curr -> next;  
    }
    cout << endl;
}

int main() {
    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth1 = (struct Node *)malloc(sizeof(struct Node));

    head1 -> data = 1;
    head1 -> next = second1;

    second1 -> data = 3;
    second1 -> next = third1;
    
    third1 -> data = 6;
    third1 -> next = fourth1;

    fourth1 -> data = 8;
    fourth1 -> next = NULL;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth2= (struct Node *)malloc(sizeof(struct Node));

    head2 -> data = 2;
    head2 -> next = second2;

    second2 -> data = 5;
    second2 -> next = third2;
    
    third2 -> data = 7;
    third2 -> next = fourth2;

    fourth2 -> data = 9;
    fourth2 -> next = NULL;

    struct Node *result = mergeTwoLists(head1, head2);
    print(result);

    return 0;
}