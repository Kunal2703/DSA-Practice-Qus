#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node * n = (struct Node *)malloc(sizeof(struct Node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;

    return n;
}

int maxDepth(struct Node *root) {
    if(root == NULL) {
        return 0;
    }
    int lh = maxDepth(root -> left);
    int rh = maxDepth(root -> right);

    return (1 + max(lh,rh));
}

int main() {
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
    p1 -> right = p3;
    p2 -> left = p4;
    p2 -> right = p5;
    p4 -> left = p6;
    p4 -> right = p7;

    cout<< "Hieght of th Binary tree is: " << maxDepth(p) << endl;


    return 0;
}