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
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int lh=height(root->left);
        int rh=height(root->right);
        int balanced=abs(lh-rh);
        if(balanced>1)return false;
        return isBalanced(root->left) && isBalanced(root->right);
        //.    1->2 ->null 2-right>->null level=2
        //1->3 ->left->4 3->right->null 4->5 level=3 true
    }
    int height(TreeNode* root){
        if(root==nullptr) return 0;
        return 1+max(height(root->left),height(root->right));
    }

};
