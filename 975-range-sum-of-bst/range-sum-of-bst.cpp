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
    void inorder(TreeNode* root,int &ans,int l,int h){
        if(!root) return;
        inorder(root->left,ans,l,h);
        if(root->val<=h && root->val>=l) ans+=root->val;
        inorder(root->right,ans,l,h);
    }
    int rangeSumBST(TreeNode* root, int l, int h) {
        int ans=0;
        inorder(root,ans,l,h);
        return ans;
    }
};