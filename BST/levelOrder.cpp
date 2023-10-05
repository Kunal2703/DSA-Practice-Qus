#include<iostream>
using namespace std;
#include<queue>

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

vector<int> levelOrder(struct Node *root) {
    vector<int> result;
    if(root == NULL) {
        return result;
    }

    queue<struct Node *> q;
    q.push(root);

    while(!q.empty()) {
        struct Node *curr = q.front();
        result.push_back(curr->data);
        q.pop();

        if(curr -> left != NULL) {
            q.push(curr -> left);
        }
        if(curr -> right != NULL) {
            q.push(curr -> right);
        }
    }
    return result;

}

int main() {
    struct Node *p = createNode(20);
    struct Node *p1 = createNode(10);
    struct Node *p2 = createNode(30);
    struct Node *p3 = createNode(5);
    struct Node *p4 = createNode(15);
    struct Node *p5 = createNode(25);
    struct Node *p6 = createNode(35);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;
    p2 -> left = p5;
    p2 -> right = p6;

    vector<int> res = levelOrder(p);

    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    cout << endl;


    return 0;
}