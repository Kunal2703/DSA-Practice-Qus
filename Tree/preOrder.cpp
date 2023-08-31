#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));

    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

void preOrder(struct Node *root) {
    if(root != NULL) {
        cout << (root -> data) << " ";
        preOrder(root -> left);
        preOrder(root -> right);
    }
}

int main() {
    struct Node *p = createNode(4);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(6);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;

    preOrder(p);

    cout << endl;
    return 0;
}