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

int getMax(struct Node *root) {
    if(root == NULL) 
    {
        return INT_MIN;
    }
    else {
        return max(root -> data, max(getMax(root -> left), getMax(root -> right)));
    }
}

int main() {
    struct Node *p = createNode(10);
    struct Node *p1 = createNode(20);
    struct Node *p2 = createNode(30);
    struct Node *p3 = createNode(80);
    struct Node *p4 = createNode(50);
    struct Node *p5 = createNode(60);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> right = p5;

    cout << "Maximum in the Binary Tree: " <<getMax(p) << endl;
    return 0;
}