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
    vector<int> res;
    void dfs(TreeNode* node,int depth){
        if(!node) return;
        if(res.size()==depth){
            res.push_back(node->val);
        }
        //1,2,3,null,4,null,5
        //dfs(1,0) res=[1]
        //dfs(3,1) res=[1,3]
        dfs(node->right,depth+1);
        dfs(node->left,depth+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        return res;
        
    }
};
