//Level order traversal
#include <iostream>
using namespace std;
#include <queue>


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
    vector<int> ans;
    //base case
    if(root == NULL) {
        return ans;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        //for print root
        Node *node = q.front();
        q.pop();

        if(node -> left != NULL) {
            q.push(node -> left);
        }
        if(node -> right != NULL) {
            q.push(node -> right);
        }
        ans.push_back(node -> data);
    }
    return ans;

}

int main() {
    struct Node *p = createNode(1);
    struct Node *p1 = createNode(2);
    struct Node *p2 = createNode(3);
    struct Node *p3 = createNode(4);
    struct Node *p4 = createNode(5);
    struct Node *p5 = createNode(6);
    struct Node *p6 = createNode(7);

    p -> left = p1;
    p -> right = p2;
    p -> left -> left = p3;
    p -> left -> right = p4;
    p -> right -> left = p5;
    p -> right -> right = p6;

    vector<int> result = levelOrder(p);
    for(int i  = 0; i< result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
    
}