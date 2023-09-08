//Palindrome Linked List
//Method 1 -> linked list convert into array
#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
};

bool checkPalindrome(vector<int> arr) {
    int n = arr.size();
    int s = 0;
    int e = n-1;
    
    while(s <= e) {
        if(arr[s] != arr[e]) {
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}

bool ispalindrome(struct Node *head ){
    vector<int> arr;
    struct Node *temp = head;
    while(temp != NULL) {
        arr.push_back(temp -> data);
        temp = temp -> next;

    }
    return checkPalindrome(arr);
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


    cout <<"Given linked list is palindrome or not: " <<ispalindrome(head) << endl;
    return 0;

}