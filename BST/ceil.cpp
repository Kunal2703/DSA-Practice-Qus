//Return greater than key

#include<iostream>
using namespace std;

struct Node {
    int key;
    struct Node *left;
    struct Node *right;
    Node(int x) {
        key = x;
        left = right = NULL;
    }
};

Node *ceil(Node *root, int x) {
    Node *res = NULL;
    while(root != NULL) {
        if(root -> key == x) {
            return root;
        }
        else if(root -> key < x) {
            root = root -> right;
        }
        else {
            res = root;
            root = root -> left;
        }
    }
    return res;
}

int main() {
    Node *root = new Node(50);
    root -> left = new Node(30);
    root -> left -> left = new Node(20);
    root -> left -> right = new Node(40);
    root -> right = new Node(70);
    root -> right -> left = new Node(60);
    root -> right -> left -> left = new Node(55);
    root -> right -> left -> right = new Node(65);
    root -> right -> right = new Node(80);

    int x = 58;
    cout << "Ceil: " << (ceil(root, 58)-> key) << endl;
    return 0;
}