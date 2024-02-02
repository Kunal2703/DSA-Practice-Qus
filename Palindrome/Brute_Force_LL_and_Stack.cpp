#include<iostream>
#include<stack>
using namespace std;

struct Node {
    char data;
    struct Node *next;
};

void linkedListTraversal(struct Node * ptr) {
    while(ptr != NULL) {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

bool isPalindrome(struct Node *head) {
    stack<char> st;

    struct Node *temp = head;
    while(temp != NULL) {
        st.push(temp->data);
        temp = temp->next;
    }


     // Reset the temporary pointer back
    // to the head of the linked list
    temp = head;

    while(temp != NULL) {
        if(temp->data != st.top()) {
            return false;
        }
        st.pop();

        temp = temp->next;
    }
    return true;
}

int main() {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head -> data = 'a';
    head -> next = second;
    
    second -> data = 'b';
    second -> next = third;

    third -> data = 'b';
    third -> next = fourth;

    fourth -> data = 'a';
    fourth -> next = NULL;

    cout << "Linked List: " << endl;
    linkedListTraversal(head);

    if(isPalindrome(head)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
    
}
