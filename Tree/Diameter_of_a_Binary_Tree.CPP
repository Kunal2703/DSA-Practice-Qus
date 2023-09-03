//Diameter of a Binary Tree
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

int height(struct Node *root, int &diameter) {
    if(root == NULL) {
        return 0;
    }
    int lh = height(root -> left, diameter);
    int rh = height(root -> right, diameter);

    diameter = max(diameter, lh+rh+1);
    return (1+max(lh,rh));
}

int isDiameter(struct Node *root) {
    int diameter = 0;
    height(root, diameter);
    return diameter;
}

int main() {
    struct Node *p = createNode(10);
    struct Node *p1 = createNode(20);
    struct Node *p2 = createNode(30);
    struct Node *p3 = createNode(40);
    struct Node *p4 = createNode(50);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;

    int diameter = isDiameter(p);
    cout <<"Diameter of the Binary Tree is: " << diameter << endl;
    return 0;
    
}