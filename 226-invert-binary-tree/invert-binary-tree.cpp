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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return root;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
           TreeNode* top = st.top();
           st.pop();
           if(top){
                if(top->left)st.push(top->left);
                if(top->right)st.push(top->right); 
                swap(top->left, top->right);
           }
           
        }
        return root;

    }
};