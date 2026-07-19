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
    int ans=0;
    int tra(TreeNode* r){
        if(r==NULL) return INT_MIN;
        int left=tra(r->left);
        int ri=tra(r->right);
        int mx=max({r->val,left,ri});
        if(r->val==mx)  ans++;
        return mx;
    }
    int countDominantNodes(TreeNode* root) {
        ans=0;
        tra(root);
        return ans;
    }
};
