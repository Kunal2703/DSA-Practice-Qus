#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr) {
    while(ptr != NULL) {
        cout << "Element " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node *reverse(struct Node *head) {
    struct Node * curr = head;
    struct Node *prev = NULL;
    struct Node *temp;
    
    while(curr) {
        temp = curr->next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool isPalindrome(struct Node *head) {
    if(head == NULL || head -> next == NULL) {
        return true;
    }
    
    struct Node *slow = head;
    struct Node *fast = head;

    while(fast -> next != NULL && fast -> next -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    struct Node *newHead = reverse(slow -> next);

    struct Node *first = head;
    struct Node *second = newHead;

    while(second != NULL) {
        if(first -> data != second -> data) {
            return false;
        }
        else {
            first = first -> next;
            second = second -> next;
        }
    }
    return true;
}

int main() {
    struct Node *head = (struct Node *)malloc(sizeof(struct  Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct  Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct  Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct  Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 2;
    third -> next = fourth;

    fourth -> data = 1;
    fourth -> next = NULL;

    cout << "Linked List: " << endl;
    linkedListTraversal(head);

    if(isPalindrome(head)) {
        cout << "True" << endl;
    }
    else {
        cout << "False " << endl;
    }

    return 0;
}


