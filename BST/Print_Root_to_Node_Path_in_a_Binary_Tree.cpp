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

bool getPath(struct Node *root, vector<int> &arr, int x) {
    if(!root) {
        return false;
    }
    arr.push_back(root -> data);
    if(root -> data == x) {
        return true;
    }
    if(getPath(root -> left, arr, x) || getPath(root -> right, arr, x)) {
        return true;
    }
    arr.pop_back();
    return false;
}

int main() {
    struct Node *root = createNode(1);
    root -> left = createNode(2);
    root -> right = createNode(3);
    root -> left -> left = createNode(4);
    root -> left -> right = createNode(5);
    root -> left -> right -> left = createNode(6);
    root -> left -> right -> right = createNode(7);

    vector<int> arr;
    getPath(root, arr, 4);

    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}