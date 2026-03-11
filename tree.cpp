#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

TreeNode* LCA(TreeNode* root, TreeNode* p, TreeNode* q) {

    if(root == NULL || root == p || root == q)
        return root;

    TreeNode* left = LCA(root->left, p, q);
    TreeNode* right = LCA(root->right, p, q);

    if(left && right)
        return root;

    return (left != NULL) ? left : right;
}

int main() {

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);
    root->right->left = new TreeNode(0);
    root->right->right = new TreeNode(8);
    root->left->right->left = new TreeNode(7);
    root->left->right->right = new TreeNode(4);

    TreeNode* p = root->left->right->left; // 7
    TreeNode* q = root->left->right->right; // 4

    TreeNode* ans = LCA(root, p, q);

    cout << "Lowest Common Ancestor: " << ans->val;

    return 0;
}