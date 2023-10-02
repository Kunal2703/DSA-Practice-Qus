#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node* ptr) {
    struct Node* start = ptr;
    while(ptr != NULL) {
        cout << ptr -> data << " ";
        ptr = ptr -> next;
        if(ptr == start) {
            break;
        }
    }
}

struct Node* detectCycle (struct Node* head) {
    struct Node* slow = head;
    struct Node* fast = head;

    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast) {
            return slow;
        }
    }
    return NULL;
}


struct Node* detectFirstNode(struct Node* head) {
    struct Node*  start = head;
    struct Node* meet = detectCycle(head);

    while(start->next!= meet->next) {
        start = start -> next;
        meet = meet -> next;
    }
    meet -> next = NULL;
    return head;
}

int main() {
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* second = (struct Node*) malloc(sizeof(struct Node));
    struct Node* third = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*) malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*) malloc(sizeof(struct Node));

    head -> data = 1;
    head -> next = second;

    second -> data = 2;
    second -> next = third;

    third -> data = 3;
    third -> next = fourth;

    fourth -> data = 4;
    fourth -> next = fifth;

    fifth -> data = 5;
    fifth -> next = second;

    struct Node* cycleNode = detectCycle(head);

    if (cycleNode) {
        cout << "Cycle detected at node with data: " << cycleNode -> data << endl;

        cout << "Linked list starting from the first cycle node: ";
        LinkedListTraversal(cycleNode);
        cout << endl;

        head = detectFirstNode(head);
        cout << "Linked List after remove cycle: ";
        LinkedListTraversal(head);
        cout << endl;

    } else {
        cout << "No cycle detected." << endl;
    }

    return 0;
}

