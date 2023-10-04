#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *addTwoNumbers(struct Node *l1, struct Node *l2) {
    struct Node *dummyNode = new Node;
    dummyNode->data = 0;

    struct Node *temp = dummyNode;
    int carry = 0;
    while(l1 != NULL || l2 != NULL || carry != 0) {
        int sum = 0;
        if(l1 != NULL) {
            sum += l1->data;
            l1 = l1->next;
        }
        if(l2 != NULL) {
            sum += l2->data;
            l2 = l2->next;
        }
        sum += carry;
        carry = sum / 10;
        struct Node *node = new Node;
        node -> data = (sum % 10);
        temp -> next = node;
        temp = temp -> next;
    }
    return dummyNode -> next;

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
    struct Node *head1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third1 = (struct Node *)malloc(sizeof(struct Node));

    head1 -> data = 2;
    head1 -> next = second1;

    second1 -> data = 4;
    second1 -> next = third1;

    third1 -> data = 3;
    third1 -> next = NULL;

    struct Node *head2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth2 = (struct Node *)malloc(sizeof(struct Node));

    head2 -> data = 5;
    head2 -> next = second2;

    second2 -> data = 6;
    second2 -> next = third2;

    third2 -> data = 7;
    third2 -> next = fourth2;

    fourth2 -> data = 9;
    fourth2 -> next = NULL;

    struct Node *result = addTwoNumbers(head1, head2);
    print(result);

    return 0;
}