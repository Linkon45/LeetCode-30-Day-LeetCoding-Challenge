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
    int max_sum(TreeNode *root, int &ans)
    {
        if (!root)
            return 0;
        int left = max_sum(root->left, ans);
        int right = max_sum(root->right, ans);
        int x = max(max(right, left) + root->val, root->val);
        int y = max(x, left + right + root->val);
        ans = max(ans, y);
        return x;
    }

public:
    int maxPathSum(TreeNode *root)
    {
        int ans = INT_MIN;
        max_sum(root, ans);
        return ans;
    }
};