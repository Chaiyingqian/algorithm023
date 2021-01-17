/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *˼·���ݹ�
 *     ʱ��O(n)���ռ�O(n)
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
        if(left && right) // p��q������
            return root;
        
        return NULL; 
    }
};