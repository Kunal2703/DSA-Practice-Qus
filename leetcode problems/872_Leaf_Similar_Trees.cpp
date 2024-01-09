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

void inOrder(struct Node *root, string &s) {
    if(root == NULL) {
        return;
    }

    inOrder(root -> left, s);

    if(root -> left == NULL && root -> right == NULL) {
        s += to_string(root -> data) + ",";
    }

    inOrder(root -> right, s);
}

bool leafSimilar(struct Node *root1, struct Node *root2) {
    string s1 = "";
    string s2 = "";

    inOrder(root1, s1);
    inOrder(root2, s2);

    if(s1 == s2) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    struct Node *p = createNode(3);  //[3,5,1,6,2,9,8,null,null,7,4], 
                                    
    struct Node *p1 = createNode(5);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(6);
    struct Node *p4 = createNode(2);
    struct Node *p5 = createNode(9);
    struct Node *p6 = createNode(8);
    struct Node *p7 = createNode(7);
    struct Node *p8 = createNode(4);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> left = p5;
    p -> right -> right = p6;
    p -> left -> right -> left = p7;
    p -> left -> right -> right = p8;

    struct Node *q = createNode(3); //[3,5,1,6,7,4,2,null,null,null,null,null,null,9,8]
    struct Node *q1 = createNode(5);
    struct Node *q2 = createNode(1);
    struct Node *q3 = createNode(6);
    struct Node *q4 = createNode(7);
    struct Node *q5 = createNode(4);
    struct Node *q6 = createNode(2);
    struct Node *q7 = createNode(9);
    struct Node *q8 = createNode(8);

    q -> left = q1;
    q -> right = q2;
    q -> left -> left = q3;
    q -> left -> right = q4;
    q -> right -> left = q5;
    q -> right -> right = q6;
    q -> right -> right -> left = q7;
    q -> right -> right -> right = q8;

    bool result = leafSimilar(p, q);
    if(result) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
    return 0;
}