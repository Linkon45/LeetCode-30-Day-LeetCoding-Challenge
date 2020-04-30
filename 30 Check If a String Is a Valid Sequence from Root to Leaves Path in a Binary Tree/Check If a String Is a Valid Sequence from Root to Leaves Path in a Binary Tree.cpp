/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
    bool isValid(TreeNode *root, vector<int> &arr, int n, int pos)
    {
        if (root == NULL || pos > n - 1 || (root->val != arr[pos]))
            return false;
        else if (pos == n - 1 && (root->left == NULL && root->right == NULL))
            return true;
        return (isValid(root->left, arr, n, pos + 1) || isValid(root->right, arr, n, pos + 1));
    }

public:
    bool isValidSequence(TreeNode *root, vector<int> &arr)
    {
        int pos = 0, n = arr.size();
        return isValid(root, arr, n, pos);
    }
};