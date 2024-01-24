//1457. Pseudo-Palindromic Paths in a Binary Tree

// Example 1:
// Input: root = [2,3,1,3,1,null,1]
// Output: 2
// Explanation: The figure above represents the given binary tree. There are three paths going from the root node to leaf nodes: the red path [2,3,3], the green path [2,1,1], and the path [2,3,1]. Among these paths only red path and green path are pseudo-palindromic paths since the red path [2,3,3] can be rearranged in [3,2,3] (palindrome) and the green path [2,1,1] can be rearranged in [1,2,1] (palindrome).

// Example 2:
// Input: root = [2,1,1,1,3,null,null,null,null,null,1]
// Output: 1
// Explanation: The figure above represents the given binary tree. There are three paths going from the root node to leaf nodes: the green path [2,1,1], the path [2,1,3,1], and the path [2,1]. Among these paths only the green path is pseudo-palindromic since [2,1,1] can be rearranged in [1,2,1] (palindrome).

// Example 3:
// Input: root = [9]
// Output: 1

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

// Variable to store the final result
int result = 0;

void solve(struct Node *root, vector<int> arr) {
    // Base case: if the node is NULL, return
    if (root == NULL) {
        return;
    }

    // Increment the count of the current node's value in the array
    arr[root -> data]++;

    // Check if the current node is a leaf node
    if (root -> left == NULL && root -> right == NULL) {

        // Count the number of odd frequency values in the array
        int oddFreq = 0;

        for (int i = 1; i <= 9; i++) {
            if (arr[i] % 2 != 0) {
                oddFreq++;
            }
        }
        // If there is at most one odd frequency value, the path is pseudo-palindromic
        if (oddFreq <= 1) {
            result += 1;
        }
    }

    // Recursive calls for left and right children
    solve(root -> left, arr);
    solve(root -> right, arr);
}

int pseudoPalindromicPaths(struct Node *root) {
    // Initialize an array to store the frequency of each digit (1 to 9)
    vector<int> arr(10, 0);

    solve(root, arr);

    // Return the final result
    return result;
}

int main() {
    struct Node *p = createNode(2);
    struct Node *p1 = createNode(3);
    struct Node *p2 = createNode(1);
    struct Node *p3 = createNode(3);
    struct Node *p4 = createNode(1);
    struct Node *p5 = createNode(1);

    p->left = p1;
    p->right = p2;
    p->left->left = p3;
    p->left->right = p4;
    p->right->right = p5;

    int ans = pseudoPalindromicPaths(p);
    cout << "Output: " << ans << endl;

    return 0;
}