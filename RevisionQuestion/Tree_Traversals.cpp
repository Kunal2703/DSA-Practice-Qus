#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node *n  = (struct Node *)malloc(sizeof(struct Node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

    return n;
}

void getInorder(struct Node *root) {

    if(root == NULL) {
        return;
    }
    getInorder(root -> left);
    cout << (root -> data) << " ";
    getInorder(root -> right);
}

void getPreorder(struct Node *root) {

    if(root == NULL) {
        return;
    }
    cout << (root -> data)<< " ";
    getPreorder(root -> left);
    getPreorder(root -> right);
}

void getPostorder(struct Node *root) {

    if(root == NULL) {
        return;
    }
    getPostorder(root -> left);
    getPostorder(root -> right);
    cout << (root -> data) << " ";
}

int main() {
    struct Node *p = createNode(1);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(4);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(2);
    struct Node *p5 = createNode(7);
    struct Node *p6 = createNode(6);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> left = p5;
    p -> right -> right = p6;

    getInorder(p);
    cout << endl;
    getPreorder(p);
    cout << endl;
    getPostorder(p);
    cout << endl;

    return 0;
}
