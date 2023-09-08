//Palindrome Linked List
//method 2 using same linked list

#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *getMid(struct Node *head) {
    struct Node *slow = head;
    struct Node *fast  = head -> next;

    while(fast != NULL && fast -> next != NULL) {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

struct Node *reverse(struct Node *head) {
    struct Node *curr = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next =  prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isPlaindrome(struct Node *head) {
    if(head -> next == NULL) {
        return true;
    }
    struct Node *middle = getMid(head);
    struct Node *temp = middle -> next;

    middle -> next = reverse(temp);
    struct Node *head1 = head;
    struct Node *head2 = middle -> next;

    while(head2 != NULL) {
        if(head1 -> data != head2 -> data) {
            return false;
        }
        head1 = head1 -> next;
        head2 = head2 -> next;
    }
    temp = middle -> next;
    middle -> next = reverse(temp);
    return true;
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

    fourth -> data = 2;
    fourth -> next = fifth;

    fifth -> data = 1;
    fifth -> next = NULL;

    cout << "Linked List is palindrome or not: " << isPlaindrome(head)<< endl;

    return 0;
