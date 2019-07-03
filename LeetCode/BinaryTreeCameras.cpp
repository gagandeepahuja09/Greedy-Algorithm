/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int nCamera;
    
    int minCameraCover(TreeNode* root) {
        nCamera = 0;
        auto s = cam(root);
        if(!s.second)
            nCamera++;
        return nCamera;
    }
    
    // first => has came, second => is monitored
    pair<bool, bool> cam(TreeNode* root) {
        if(!root)
            return { false, true };
        int monitored = false, hasCamera = false;
        auto l = cam(root -> left), r = cam(root -> right);
        if(l.first || r.first)
            monitored = true;
        if(!l.second || !r.second) {
            hasCamera = true;
            monitored = true;
            nCamera++;
        }
        return { hasCamera, monitored };
    }
};
