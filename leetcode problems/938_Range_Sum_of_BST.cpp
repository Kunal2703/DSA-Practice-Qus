#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode(int data) {
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

 // Variable to hold the sum of node values within the range
int sum = 0;

int inOrder(struct Node *root, int low, int high) {
    // Base case: if the node is null, return without processing
    if (root == 0) {
        return 0;
    }

    inOrder(root->left, low, high); // Traverse left subtree

    // Check if the current node's value is within the given range [low, high]
    if (root->data >= low && root->data <= high) {
        sum += root->data; // If within range, add the node's value to the sum
    }
    inOrder(root->right, low, high); // Traverse right subtree
}

int rangeSumBST(struct Node *root, int low, int high) {
        inOrder(root, low, high);
        return sum;
}

int main() {
    struct Node *p = createNode(10); //[10, 5, 15, 3, 7, 13, 18, 1, null, 6]
    struct Node *p1 = createNode(5);
    struct Node *p2 = createNode(15);
    struct Node *p3 = createNode(3);
    struct Node *p4 = createNode(7);
    struct Node *p5 = createNode(13);
    struct Node *p6 = createNode(18);
    struct Node *p7 = createNode(1);
    struct Node *p8 = createNode(6);

    p->left = p1;
    p->right = p2;
    p->left->left = p3;
    p->left->right = p4;
    p->right->left = p5;
    p->right->right = p6;
    p->left->left->left = p7;
    p->left->right->left = p8;

    int low = 6;
    int high = 10;

    int result = rangeSumBST(p, low, high);
    cout << "Output: " << result << endl;
    return 0;
}
