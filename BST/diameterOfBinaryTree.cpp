#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

    return n;
}
int height(struct Node *node, int &diameter) {
    if(node == NULL) {
        return 0;
    }
    int lh = height(node -> left, diameter);
    int rh = height(node -> right, diameter);
    
    diameter = max(diameter, lh+rh);
    return(1 + max(lh, rh));
}

int diameterOfBinaryTree(struct Node *root) {
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

int main () {
    
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(2);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(10);
    struct Node *p4 = createNode(3);
    struct Node *p5 = createNode(4);
    struct Node *p6 = createNode(8);
    struct Node *p7 = createNode(11);

    p -> left = p1;
    p -> right = p2;
    p -> left -> right = p3;
    p -> right -> left = p4;
    p -> right -> right = p5;
    p -> right -> left -> left = p6;
    p -> right -> left -> right = p7;
    

    cout << diameterOfBinaryTree(p) << endl;

    return 0;
}