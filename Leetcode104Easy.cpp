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

 // Leetcode104Easy
class Solution {
public:
    int maxDepth(TreeNode* root) {
        // base condition
        if(root == NULL){
            return 0;
        }

        // find max of left and right
        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);
        
        int height = max(leftHeight, rightHeight) + 1; 
        // return
        return height;
    }
};