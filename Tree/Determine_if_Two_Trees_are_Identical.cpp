#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *createNode1(int data) {
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    n1 -> data = data;
    n1 -> left = NULL;
    n1 -> right = NULL;
    return n1;
}
struct Node *createNode2(int data) {
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    n2 -> data = data;
    n2 -> left = NULL;
    n2 -> right = NULL;
    return n2;
}

bool isIdentical(struct Node *root1, struct Node *root2) {
    if(root1 == NULL || root2 == NULL) {
        return (root1 == root2);
    }
    else {
        return ((root1 -> data == root2 -> data) 
            &&(isIdentical(root1 -> left, root2 -> left))
            &&(isIdentical(root1 -> right, root2 -> right)));
    }
}

int main() {

    //first tree
    struct Node *p = createNode1(1);
    struct Node *p1 = createNode1(2);
    struct Node *p2 = createNode1(3);

    p -> left = p1;
    p -> right = p2;

    //second tree
    struct Node *q = createNode1(1);
    struct Node *q1 = createNode1(2);
    struct Node *q2 = createNode1(3);

    q -> left = q1;
    q -> right = q2;


    cout << "Two Tree are identical or Not: " << isIdentical(p,q) << endl;
    return 0;

}