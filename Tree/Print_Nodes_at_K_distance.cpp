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

void printDist(struct Node *root, int k) {
    if(root == NULL) 
    {
        return;
    }
    if(k == 0) {
        cout << (root -> data) << " ";
    }
    else {
        printDist(root -> left, k-1);
        printDist(root -> right, k-1);
    }
}

int main() {
    struct Node *p = createNode(10);
    struct Node *p1 = createNode(20);
    struct Node *p2 = createNode(30);
    struct Node *p3 = createNode(40);
    struct Node *p4 = createNode(50);
    struct Node *p5 = createNode(70);
    struct Node *p6 = createNode(80);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> right = p5;
    p -> right -> right -> right = p6;

    int k = 2;

    printDist(p, k);
    cout << endl;

    return 0;

}