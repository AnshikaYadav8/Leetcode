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
class Solution {
public:
    int dfs(TreeNode* root, int current_sum){
        if(root==NULL) return 0;
        current_sum = current_sum*10+root->val;
        if(!root->left&&!root->right){
            return current_sum;
        }
        return dfs(root->left, current_sum)+dfs(root->right, current_sum);
    }
    int sumNumbers(TreeNode* root) {
       return dfs(root,0);
    }      
};