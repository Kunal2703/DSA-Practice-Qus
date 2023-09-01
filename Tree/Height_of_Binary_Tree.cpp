#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * createNode(int data) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n -> data = data;
    n -> left = NULL;
    n -> right = NULL;
    return n;
}

int heightOfBST(struct Node *root) {
    if(root == NULL) {
        return 0;
    }
    else {
        int left = heightOfBST(root ->left);
        int right = heightOfBST(root ->right);

        return max(left, right) +1;
    }

}

int main() {
    struct Node *p = createNode(12);
    struct Node *p1 = createNode(8);
    struct Node *p2 = createNode(18);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(9);
    struct Node *p5 = createNode(17);
    struct Node *p6 = createNode(4);
    struct Node *p7 = createNode(2);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> left = p5;
    p -> left -> left -> left = p6;
    p -> left -> left -> left -> left = p7;


    int height = heightOfBST(p);
    cout << "Height of the BST: " << height << endl;
    return 0;
}