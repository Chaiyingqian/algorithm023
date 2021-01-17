/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *思路：递归
 *     时间O(n)，空间O(n)
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // recursion terminator
        if(root == NULL)
            return NULL;
        if(root == p || root == q) 
            return root;
        
        //process current logic
        TreeNode* left =  lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
       
        //drill down
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;      
        if(left && right) // p和q在两侧
            return root;
        
        return NULL; 
    }
};