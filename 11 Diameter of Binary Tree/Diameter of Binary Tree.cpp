/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int hight(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int leftHight = hight(root->left);
    int rightHight = hight(root->right);
    return max(leftHight, rightHight) + 1;
}

class Solution
{
public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftHight = hight(root->left);
        int rightHight = hight(root->right);

        int leftDiameter = diameterOfBinaryTree(root->left);
        int rightDiameter = diameterOfBinaryTree(root->right);

        return max(leftHight + rightHight, max(leftDiameter, rightDiameter));
    }
};