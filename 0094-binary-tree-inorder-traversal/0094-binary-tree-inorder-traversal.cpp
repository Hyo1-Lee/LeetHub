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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> stack;
        vector<int> ret;

        TreeNode* temp = root;
        while (temp != NULL or !stack.empty()){
            while (temp!=NULL){
                stack.push(temp);
                temp = temp->left;
            }
            temp = stack.top();
            stack.pop();
            ret.push_back(temp->val);
            temp = temp->right;
        }

        return ret;
    }
};