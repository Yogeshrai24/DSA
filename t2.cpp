#include <iostream>
#include <climits>
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

int solve(TreeNode* root, int &maxSum) {
    if(root == NULL)
        return 0;

    int left = max(0, solve(root->left, maxSum));
    int right = max(0, solve(root->right, maxSum));

    maxSum = max(maxSum, left + right + root->val);

    return max(left, right) + root->val;
}

int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN;
    solve(root, maxSum);
    return maxSum;
}

int main() {

    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);

    cout << "Maximum Path Sum: " << maxPathSum(root);

    return 0;
}