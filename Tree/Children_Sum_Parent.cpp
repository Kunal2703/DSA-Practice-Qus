//check whether all nodes of a tree have the value 
//equal to the sum of their child nodes.

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

int isSum(struct Node *root) {
    if(root == NULL) {
        return 1;
    }
    if(root -> left == NULL && root -> right == NULL) {
        return 1;
    }
    
    int left_sum = 0;
    int right_sum = 0;

    if(root -> left != NULL) {
        left_sum = root -> left -> data;
    }
    if(root -> right != NULL) {
        right_sum = root -> right -> data;
    }
    if((root -> data) == (left_sum + right_sum) && isSum(root -> left) && isSum(root -> right)) {
        return 1;
    }
    else {
        return 0;
    }

}

int main() {
    struct Node *p = createNode(5);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(2);
    struct Node *p3 = createNode(1);
    struct Node *p4 = createNode(2);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;

    cout << "sum of child is equal to parents or not: "<< isSum(p) << endl;
    return 0;

}