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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* newNode = new TreeNode(val);
        TreeNode* tmpRoot = root;
        TreeNode* parentNode;
        while(tmpRoot!=NULL){
            parentNode = tmpRoot;
            if(tmpRoot->val > val)
                tmpRoot = tmpRoot->left;
            else
                tmpRoot = tmpRoot->right;
        }
        if(parentNode->val > val)
            parentNode->left = newNode;
        else
            parentNode->right = newNode;
        return root;
    }
};
