#include<iostream> 
using namespace std;
#include<queue>
#include<vector>


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
    vector<int> res;
    if(root == NULL) {
        return res;
    }

    queue<struct Node *> q;
    q.push(root);
    
    while(!q.empty()) {
        struct Node *curr = q.front();
        res.push_back(curr->data);
        q.pop();

        if(curr -> left != NULL) {
            q.push(curr -> left);
        }
        if(curr -> right != NULL) {
            q.push(curr -> right);
        }
    }
    return res;
}


int main() {
    struct Node *p = createNode(3);
    struct Node *p1 = createNode(1);
    struct Node *p2 = createNode(4);
    struct Node *p3 = createNode(2);
    struct Node *p4 = createNode(5);

    p -> left = p1;
    p -> right = p2;
    p1 -> right = p3;
    p2 -> right = p4;

    vector<int> result = levelOrder(p);

    for(int i  = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    cout << endl;
    return 0;
}